#include "CoolGuyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

// ������� Ű �̸� ����
const FName ACoolGuyAIController::PatrolLocationKey = "PatrolLocation";
const FName ACoolGuyAIController::TargetPlayerKey = "TargetPlayer"; // 챕터 3 과제
const FName ACoolGuyAIController::CanSeePlayerKey = "CanSeePlayer";
const FName ACoolGuyAIController::LastSeenLocationKey = "LastSeenLocation";
const FName ACoolGuyAIController::SearchStateKey = "SearchState";
const FName ACoolGuyAIController::LastHeardLocationKey = "LastHeardLocation";
const FName ACoolGuyAIController::CanHearPlayerKey = "CanHearPlayer";
const FName ACoolGuyAIController::DetectedCountsKey = "DetectedCounts"; // 챕터 3 과제


ACoolGuyAIController::ACoolGuyAIController()
{
    // AI �ν� ������Ʈ ����
    CoolGuyPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    // �þ� ����
    SightConfig->SightRadius = 1500.0f; // �þ� ����
    SightConfig->LoseSightRadius = 2000.0f; // �þ� ��� ����
    SightConfig->PeripheralVisionAngleDegrees = 70.0f; // �ֺ� �þ� ����
    SightConfig->SetMaxAge(5.0f); // �ڱ� �ִ� ��� �ð�

    // ���� ����
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    // �ν� ������Ʈ�� �þ� ���� ����
    CoolGuyPerceptionComponent->ConfigureSense(*SightConfig);
    CoolGuyPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

    // û������ ����
    // PawnSensing ������Ʈ ����. Sound�� Perception�� �ƴ� PawnSensing���� �����Ͽ���.
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

    // �ν� ������Ʈ �̺�Ʈ ����
    CoolGuyPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &ACoolGuyAIController::OnTargetPerceptionUpdated);

    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
    }

    /* 챕터 3 과제를 위해 주석처리
    // PawnSensing �̺�Ʈ ���ε�
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnHearNoise.RemoveAll(this);
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &ACoolGuyAIController::OnHearNoise);
        UE_LOG(LogTemp, Warning, TEXT("PawnSensingComponent OnHearNoise delegate bound"));
    }
    */  
};

void ACoolGuyAIController::Tick(float DeltaTime)
{
    // 챕터 3 10초 타이머 설계 후 Idle 전환
    StatusResetTimer -= DeltaTime;
    if (StatusResetTimer <= 0 && StatusResetTimer > -1)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
        BB->SetValueAsEnum(DetectedCountsKey, 0);
        UE_LOG(LogTemp, Warning, TEXT("Detected COunt and Status Reset"));
    }
}

//// �Ʒ��ڵ� �߰�
void ACoolGuyAIController::OnPossess(APawn* InPawn) // ���⼭ �ش� AIController�� �����ϰ� �� Pawn�� ������ ���޹���
{
    Super::OnPossess(InPawn);

    //�����̺�� Ʈ�� ����.

    if (BehaviorTree)
    {
        UseBlackboard(BehaviorTree->BlackboardAsset, BlackboardComponent);
        RunBehaviorTree(BehaviorTree);
    }

    // Ÿ�̸Ӹ� ����Ͽ� �ణ ������Ų �� �ʱ�ȭ
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &ACoolGuyAIController::InitializePatrolPoints, 0.5f, false);
}

// �ʱ�ȭ Ÿ�̹� ������ ���� �����Լ� ��ġ.
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

// �ν� ������Ʈ �ݹ� ����
void ACoolGuyAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // �÷��̾� ���� Ȯ��
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter) return;

    // Actor�� Character�� �ܼ����� �� �����Ƿ� Actor�� ACharacter�� �ӽ� ĳ�����Ͽ� ��.
    if (Cast<ACharacter>(Actor) == PlayerCharacter)
    {
        // �ð� �ڱ����� Ȯ��
        if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
        {
            bool bCanSeePlayer = Stimulus.WasSuccessfullySensed();
            

            if (BB)
            {
                BB->SetValueAsObject(TargetPlayerKey, bCanSeePlayer ? Actor : nullptr);
                BB->SetValueAsBool(CanSeePlayerKey, bCanSeePlayer);

                if (bCanSeePlayer)
                {
                    // 챕터 3 과제 발각횟수 카운트
                    BB->SetValueAsInt(DetectedCountsKey, BB->GetValueAsInt(DetectedCountsKey) + 1);
                    
                    // �÷��̾� �߰� - ���� ����
                    BB->SetValueAsVector(LastSeenLocationKey, Stimulus.StimulusLocation);
                    if (BB->GetValueAsInt(DetectedCountsKey) >= 5) // 챕터 3 과제 5회 이상 발각될 경우 추격시작
                    {
                        StartChasingPlayer(Actor);
                        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Chasing);
                        StatusResetTimer = 10.0f;
                        UE_LOG(LogTemp, Warning, TEXT("AI can see the player! Starting chase for 10 sec"));
                    }                                       
                }
                else
                {
                    // �÷��̾� �þ߿��� ����� - ������ ��ġ �˻�
                    ESearchStateInternal CurrentState = (ESearchStateInternal)BB->GetValueAsEnum(SearchStateKey);
                    if (CurrentState == ESearchStateInternal::Chasing)
                    {
                        if (BB)
                        {
                            BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Suspicious);
                            BB->SetValueAsVector(LastSeenLocationKey, Stimulus.StimulusLocation);

                            // �ʿ��� ��� �߰� ���� ����
                            // ��: �ӵ� ����, �˶� �߻� ��
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

// �÷��̾� ���� ���� �Լ�
void ACoolGuyAIController::StartChasingPlayer(AActor* PlayerActor)
{
    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Chasing);
        BB->SetValueAsObject(TargetPlayerKey, PlayerActor);

        // �ʿ��� ��� �߰� ���� ����
        // ��: �ӵ� ����, �˶� �߻� ��
    }
}

// �÷��̾� ���� ���� �Լ�
void ACoolGuyAIController::StopChasingPlayer()
{
    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Idle);
        BB->SetValueAsObject(TargetPlayerKey, nullptr);
        BB->SetValueAsBool(CanSeePlayerKey, false);
    }
}

// ������ ��ġ ���� �Լ�
void ACoolGuyAIController::StartSearchingLastLocation()
{

    if (BB)
    {
        BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Suspicious);

        // ������ ��ġ�� �̵��ϴ� ������ �����̺�� Ʈ������ ó��
    }
}

/* 챕터 3 과제를 위해 주석처리
// OnHearNoise �Լ� ����
void ACoolGuyAIController::OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume)
{
    // �÷��̾� ĳ�������� Ȯ��
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter || !BB) return;

    if (PawnInstigator == PlayerCharacter)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI heard player noise via PawnSensing"));

        BB->SetValueAsBool(CanHearPlayerKey, true);
        BB->SetValueAsVector(LastHeardLocationKey, Location);

        // ���� ���°� Idle�̸� Investigating���� ����
        ESearchStateInternal CurrentState = (ESearchStateInternal)BB->GetValueAsEnum(SearchStateKey);
        if (CurrentState == ESearchStateInternal::Idle)
        {
            BB->SetValueAsEnum(SearchStateKey, (uint8)ESearchStateInternal::Investigating);
            UE_LOG(LogTemp, Warning, TEXT("AI state changed to Investigating due to noise"));
        }

        // Ÿ�̸� ���� - �Ҹ� ���� ���� �ʱ�ȭ
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
            {
                if (BB)
                {
                    BB->SetValueAsBool(CanHearPlayerKey, false);

                    // �÷��̾ ���� ���� �ƴ϶�� ���� �ʱ�ȭ
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
*/
// ReportNoiseEvent �Լ� ����
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