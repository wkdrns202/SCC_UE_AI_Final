#include "CoolGuyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

// 블랙보드 키 이름 정의
const FName ACoolGuyAIController::PatrolLocationKey = "PatrolLocation";
const FName ACoolGuyAIController::TargetPlayerKey = "TargetPlayer";
const FName ACoolGuyAIController::CanSeePlayerKey = "CanSeePlayer";
const FName ACoolGuyAIController::LastSeenLocationKey = "LastSeenLocation";
const FName ACoolGuyAIController::SearchStateKey = "SearchState";
const FName ACoolGuyAIController::LastHeardLocationKey = "LastHeardLocation";
const FName ACoolGuyAIController::CanHearPlayerKey = "CanHearPlayer";


ACoolGuyAIController::ACoolGuyAIController()
{
    // AI 인식 컴포넌트 설정
    CoolGuyPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    // 시야 설정
    SightConfig->SightRadius = 1500.0f; // 시야 범위
    SightConfig->LoseSightRadius = 2000.0f; // 시야 상실 범위
    SightConfig->PeripheralVisionAngleDegrees = 70.0f; // 주변 시야 각도
    SightConfig->SetMaxAge(5.0f); // 자극 최대 기억 시간

    // 감지 설정
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    // 인식 컴포넌트에 시야 설정 적용
    CoolGuyPerceptionComponent->ConfigureSense(*SightConfig);
    CoolGuyPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

    // 청각관련 설정
    // PawnSensing 컴포넌트 설정. Sound는 Perception이 아닌 PawnSensing으로 접근하였음.
    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
    PawnSensingComponent->HearingThreshold = 3000.0f;
    PawnSensingComponent->LOSHearingThreshold = 3000.0f;
    PawnSensingComponent->SensingInterval = 0.25f;
    PawnSensingComponent->bOnlySensePlayers = false;
    PawnSensingComponent->SightRadius = 1500.0f;

}

void ACoolGuyAIController::BeginPlay()
{
    Super::BeginPlay();

    BB = GetBlackboardComponent();

    // 인식 업데이트 이벤트 설정
    CoolGuyPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &ACoolGuyAIController::OnTargetPerceptionUpdated);

    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
    }


    // PawnSensing 이벤트 바인딩
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnHearNoise.RemoveAll(this);
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &ACoolGuyAIController::OnHearNoise);
        UE_LOG(LogTemp, Warning, TEXT("PawnSensingComponent OnHearNoise delegate bound"));
    }

    

};

//// 아래코드 추가
void ACoolGuyAIController::OnPossess(APawn* InPawn) // 여기서 해당 AIController가 제어하게 될 Pawn의 포인터 전달받음
{
    Super::OnPossess(InPawn);

    //비헤이비어 트리 실행.

    if (BehaviorTree)
    {
        UseBlackboard(BehaviorTree->BlackboardAsset, BlackboardComponent);
        RunBehaviorTree(BehaviorTree);
    }

    // 타이머를 사용하여 약간 지연시킨 후 초기화
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &ACoolGuyAIController::InitializePatrolPoints, 0.5f, false);
}

// 초기화 타이밍 조절을 위한 지연함수 배치.
void ACoolGuyAIController::InitializePatrolPoints()
{
    PatrolPoints.Empty();

    TArray<AActor*> FoundTargetPoints;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoundTargetPoints);

    for (AActor* TargetPoint : FoundTargetPoints)
    {
        PatrolPoints.Add(TargetPoint->GetActorLocation());
    }

    UE_LOG(LogTemp, Warning, TEXT("PatrolPoints Count is : %d"), PatrolPoints.Num());

    if (PatrolPoints.Num() > 0)
    {
        Blackboard->SetValueAsVector("PatrolLocation", PatrolPoints[0]);
        Blackboard->SetValueAsInt("PatrolIndex", 0);
    }

    bPatrolPointsReady = true;
}

// 인식 업데이트 콜백 구현
void ACoolGuyAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // 플레이어 감지 확인
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter) return;

    // Actor와 Character를 단순비교할 수 없으므로 Actor를 ACharacter로 임시 캐스팅하여 비교.
    if (Cast<ACharacter>(Actor) == PlayerCharacter)
    {
        // 시각 자극인지 확인
        if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
        {
            bool bCanSeePlayer = Stimulus.WasSuccessfullySensed();
            

            if (BB)
            {
                BB->SetValueAsObject(TargetPlayerKey, bCanSeePlayer ? Actor : nullptr);
                BB->SetValueAsBool(CanSeePlayerKey, bCanSeePlayer);

                if (bCanSeePlayer)
                {
                    // 플레이어 발견 - 추적 시작
                    BB->SetValueAsVector(LastSeenLocationKey, Stimulus.StimulusLocation);
                    StartChasingPlayer(Actor);

                    UE_LOG(LogTemp, Warning, TEXT("AI can see the player! Starting chase..."));
                }
                else
                {
                    // 플레이어 시야에서 사라짐 - 마지막 위치 검색
                    ESearchStateInternal CurrentState = (ESearchStateInternal)BB->GetValueAsEnum(SearchStateKey);
                    if (CurrentState == ESearchStateInternal::Chasing)
                    {
                        if (BB)
                        {
                            BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Investigating);
                            BB->SetValueAsVector(LastSeenLocationKey, Stimulus.StimulusLocation);

                            // 필요한 경우 추가 동작 구현
                            // 예: 속도 증가, 알람 발생 등
                        }

                        UE_LOG(LogTemp, Display, TEXT("Player lost! Searching last known location..."));

                        FTimerHandle StopTimer;
                        GetWorldTimerManager().SetTimer(StopTimer, this, &ACoolGuyAIController::StopChasingPlayer, 10.0f, false);
                    }
                }
            }
        }
    }
}

// 플레이어 추적 시작 함수
void ACoolGuyAIController::StartChasingPlayer(AActor* PlayerActor)
{
    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Chasing);
        BB->SetValueAsObject(TargetPlayerKey, PlayerActor);

        // 필요한 경우 추가 동작 구현
        // 예: 속도 증가, 알람 발생 등
    }
}

// 플레이어 추적 중지 함수
void ACoolGuyAIController::StopChasingPlayer()
{
    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
        BB->SetValueAsObject(TargetPlayerKey, nullptr);
        BB->SetValueAsBool(CanSeePlayerKey, false);
    }
}

// 마지막 위치 수색 함수
void ACoolGuyAIController::StartSearchingLastLocation()
{

    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Searching);

        // 마지막 위치로 이동하는 로직은 비헤이비어 트리에서 처리
    }
}

// OnHearNoise 함수 구현
void ACoolGuyAIController::OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume)
{
    // 플레이어 캐릭터인지 확인
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter || !BB) return;

    if (PawnInstigator == PlayerCharacter)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI heard player noise via PawnSensing"));

        BB->SetValueAsBool(CanHearPlayerKey, true);
        BB->SetValueAsVector(LastHeardLocationKey, Location);

        // 현재 상태가 Idle이면 Investigating으로 변경
        ESearchStateInternal CurrentState = (ESearchStateInternal)BB->GetValueAsEnum(SearchStateKey);
        if (CurrentState == ESearchStateInternal::Idle)
        {
            BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Investigating);
            UE_LOG(LogTemp, Warning, TEXT("AI state changed to Investigating due to noise"));
        }

        // 타이머 설정 - 소리 감지 상태 초기화
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
            {
                if (BB)
                {
                    BB->SetValueAsBool(CanHearPlayerKey, false);

                    // 플레이어를 추적 중이 아니라면 상태 초기화
                    ESearchStateInternal CurrentState = (ESearchStateInternal)BB->GetValueAsEnum(SearchStateKey);
                    if (CurrentState == ESearchStateInternal::Investigating)
                    {
                        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
                        UE_LOG(LogTemp, Warning, TEXT("AI returned to Idle state after investigating"));
                    }
                }
            }, 5.0f, false);
    }
}

// ReportNoiseEvent 함수 구현
void ACoolGuyAIController::ReportNoiseEvent(FVector NoiseLocation, float Loudness, float MaxRange)
{
    UAISense_Hearing::ReportNoiseEvent(
        GetWorld(),
        NoiseLocation,
        Loudness,
        this,
        MaxRange,
        FName("AIHearingTest")
    );

    UE_LOG(LogTemp, Warning, TEXT("Reported noise event at %s with loudness %f"),
        *NoiseLocation.ToString(), Loudness);
}