#include "AI_DetectionGuard.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "NavigationSystem.h"

AAI_DetectionGuard::AAI_DetectionGuard()
{
    PrimaryActorTick.bCanEverTick = true;

    // 기본 속성 초기화
    GuardAlertLevel = EGuardAlertLevel::Idle;
    DetectionCount = 0;
    MaxDetectionCount = 5;     // 5회 이상 감지 시 추적 상태로 전환
    DetectionDecayTime = 5.0f; // 5초마다 감지 카운트 감소

    // 이동 속도 초기화
    IdleSpeed = 200.0f;
    SuspiciousSpeed = 300.0f;
    ChasingSpeed = 600.0f;

    // 시야 설정 초기화
    SightRadius = 1500.0f;
    LoseSightRadius = 2000.0f;
    PeripheralVisionAngle = 60.0f;

    // AI 지각 컴포넌트 생성
    PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));

    // Pawn 감지 컴포넌트 생성
    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
    PawnSensingComponent->SetPeripheralVisionAngle(PeripheralVisionAngle);
    PawnSensingComponent->SightRadius = SightRadius;
    PawnSensingComponent->HearingThreshold = 1000.0f;
    PawnSensingComponent->LOSHearingThreshold = 1500.0f;
    PawnSensingComponent->SensingInterval = 0.5f;

    // 타겟 초기화
    TargetPlayer = nullptr;
    LastKnownPlayerLocation = FVector::ZeroVector;
}

void AAI_DetectionGuard::BeginPlay()
{
    Super::BeginPlay();

    // AI 컨트롤러 가져오기
    AIController = Cast<AAIController>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("%s couldn't find AIController!"), *GetName());
        return;
    }

    // 지각 시스템 설정
    SetupPerceptionSystem();

    // 비헤이비어 트리 실행
    if (BehaviorTree)
    {
        AIController->RunBehaviorTree(BehaviorTree);

        // 초기 블랙보드 값 설정
        UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
        if (BlackboardComp)
        {
            BlackboardComp->SetValueAsInt("DetectionCount", DetectionCount);
            BlackboardComp->SetValueAsEnum("AlertLevel", (uint8)GuardAlertLevel);
            BlackboardComp->SetValueAsVector("HomeLocation", GetActorLocation());
        }
    }

    // 감지 카운트 감소 타이머 설정
    GetWorldTimerManager().SetTimer(
        DetectionDecayTimerHandle,
        this,
        &AAI_DetectionGuard::HandleDetectionDecay,
        DetectionDecayTime,
        true
    );

    // 초기 이동 속도 설정
    SetSpeedByAlertLevel();
}

void AAI_DetectionGuard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 블랙보드 값 업데이트
    UpdateBlackboard();
}

void AAI_DetectionGuard::SetupPerceptionSystem()
{
    // PawnSensing 이벤트 바인딩
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnSeePawn.AddDynamic(this, &AAI_DetectionGuard::OnSeePlayer);
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &AAI_DetectionGuard::OnHearNoise);
    }

    // AI 지각 설정
    if (PerceptionComponent)
    {
        // 시각 감각 설정
        UAISenseConfig_Sight* SightConfig = NewObject<UAISenseConfig_Sight>(this);
        SightConfig->SightRadius = SightRadius;
        SightConfig->LoseSightRadius = LoseSightRadius;
        SightConfig->PeripheralVisionAngleDegrees = PeripheralVisionAngle;
        SightConfig->DetectionByAffiliation.bDetectEnemies = true;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

        // 청각 감각 설정
        UAISenseConfig_Hearing* HearingConfig = NewObject<UAISenseConfig_Hearing>(this);
        HearingConfig->HearingRange = 1500.0f;
        HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
        HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
        HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;

        // 지각 컴포넌트에 감각 구성 추가
        PerceptionComponent->ConfigureSense(*SightConfig);
        PerceptionComponent->ConfigureSense(*HearingConfig);
        PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

        // 지각 이벤트 바인딩
        PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAI_DetectionGuard::OnPerceptionUpdated);
    }
}

void AAI_DetectionGuard::OnSeePlayer(APawn* SeenPawn)
{
    // 플레이어 폰인지 확인
    if (SeenPawn && SeenPawn == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
    {
        // 플레이어 위치 저장
        LastKnownPlayerLocation = SeenPawn->GetActorLocation();
        TargetPlayer = SeenPawn;

        // 감지 카운트 증가
        IncrementDetectionCount();

        // 디버그 정보 표시
        DrawDebugLine(
            GetWorld(),
            GetActorLocation(),
            SeenPawn->GetActorLocation(),
            FColor::Red,
            false,
            2.0f,
            0,
            3.0f
        );

        UE_LOG(LogTemp, Warning, TEXT("%s visually detected player. DetectionCount: %d, AlertLevel: %d"),
            *GetName(), DetectionCount, (int32)GuardAlertLevel);

        // 블랙보드 업데이트
        if (AIController)
        {
            UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
            if (BlackboardComp)
            {
                BlackboardComp->SetValueAsVector("PlayerLocation", LastKnownPlayerLocation);
                BlackboardComp->SetValueAsBool("CanSeePlayer", true);
            }
        }
    }
}

void AAI_DetectionGuard::OnHearNoise(APawn* NoiseMaker, const FVector& Location, float Volume)
{
    // 플레이어가 소리를 냈는지 확인
    if (NoiseMaker && NoiseMaker == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
    {
        // 소리 위치 저장
        LastKnownPlayerLocation = Location;

        // 소리 크기에 따라 감지 카운트 증가
        if (Volume > 0.5f)
        {
            IncrementDetectionCount();

            UE_LOG(LogTemp, Warning, TEXT("%s heard player noise at %s. Volume: %f, DetectionCount: %d"),
                *GetName(), *Location.ToString(), Volume, DetectionCount);

            // 블랙보드 업데이트
            if (AIController)
            {
                UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
                if (BlackboardComp)
                {
                    BlackboardComp->SetValueAsVector("PlayerLocation", Location);
                    BlackboardComp->SetValueAsBool("IsInvestigating", true);
                }
            }
        }
    }
}

void AAI_DetectionGuard::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // 플레이어인지 확인
    APawn* PlayerPawn = Cast<APawn>(Actor);
    if (PlayerPawn && PlayerPawn == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
    {
        // 성공적으로 감지되었는지 확인
        if (Stimulus.WasSuccessfullySensed())
        {
            // 시각 감각인지 확인
            if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
            {
                // 플레이어 위치 저장
                LastKnownPlayerLocation = PlayerPawn->GetActorLocation();
                TargetPlayer = PlayerPawn;

                // 감지 카운트 증가
                IncrementDetectionCount();

                // 블랙보드 업데이트
                if (AIController)
                {
                    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
                    if (BlackboardComp)
                    {
                        BlackboardComp->SetValueAsVector("PlayerLocation", LastKnownPlayerLocation);
                        BlackboardComp->SetValueAsBool("CanSeePlayer", true);
                    }
                }
            }
            // 청각 감각인지 확인
            else if (Stimulus.Type == UAISense::GetSenseID<UAISense_Hearing>())
            {
                // 소리 위치 저장
                LastKnownPlayerLocation = Stimulus.StimulusLocation;

                // 소리 크기에 따라 감지 카운트 증가
                if (Stimulus.Strength > 0.5f)
                {
                    IncrementDetectionCount();

                    // 블랙보드 업데이트
                    if (AIController)
                    {
                        UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
                        if (BlackboardComp)
                        {
                            BlackboardComp->SetValueAsVector("PlayerLocation", LastKnownPlayerLocation);
                            BlackboardComp->SetValueAsBool("IsInvestigating", true);
                        }
                    }
                }
            }
        }
        else
        {
            // 감지 실패 시 블랙보드 업데이트
            if (AIController)
            {
                UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
                if (BlackboardComp)
                {
                    BlackboardComp->SetValueAsBool("CanSeePlayer", false);
                }
            }
        }
    }
}

void AAI_DetectionGuard::IncrementDetectionCount()
{
    // 최대값을 넘지 않도록 감지 카운트 증가
    DetectionCount = FMath::Min(DetectionCount + 1, MaxDetectionCount);

    // 경계 수준 업데이트
    UpdateAlertLevel();
}

void AAI_DetectionGuard::DecrementDetectionCount()
{
    // 음수가 되지 않도록 감지 카운트 감소
    DetectionCount = FMath::Max(DetectionCount - 1, 0);

    // 경계 수준 업데이트
    UpdateAlertLevel();
}

void AAI_DetectionGuard::HandleDetectionDecay()
{
    // 타이머에 의해 주기적으로 감지 카운트 감소
    // 추적 중이 아닐 때만 감소
    if (GuardAlertLevel != EGuardAlertLevel::Chasing)
    {
        DecrementDetectionCount();
    }
}

void AAI_DetectionGuard::UpdateAlertLevel()
{
    // 이전 경계 수준 저장
    EGuardAlertLevel PreviousLevel = GuardAlertLevel;

    // 감지 횟수에 따라 경계 수준 결정
    if (DetectionCount >= 5)
    {
        GuardAlertLevel = EGuardAlertLevel::Chasing;
    }
    else if (DetectionCount >= 2)
    {
        GuardAlertLevel = EGuardAlertLevel::Suspicious;
    }
    else
    {
        GuardAlertLevel = EGuardAlertLevel::Idle;
    }

    // 경계 수준 변경되었을 때만 로그 출력 및 속도 변경
    if (PreviousLevel != GuardAlertLevel)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s alert level changed from %d to %d"),
            *GetName(), (int32)PreviousLevel, (int32)GuardAlertLevel);

        // 경계 수준에 따라 이동 속도 조정
        SetSpeedByAlertLevel();
    }
}

void AAI_DetectionGuard::SetSpeedByAlertLevel()
{
    // 캐릭터 이동 컴포넌트 가져오기
    UCharacterMovementComponent* MovementComp = GetCharacterMovement();
    if (!MovementComp)
    {
        return;
    }

    // 경계 수준에 따라 이동 속도 설정
    switch (GuardAlertLevel)
    {
    case EGuardAlertLevel::Idle:
        MovementComp->MaxWalkSpeed = IdleSpeed;
        break;

    case EGuardAlertLevel::Suspicious:
        MovementComp->MaxWalkSpeed = SuspiciousSpeed;
        break;

    case EGuardAlertLevel::Chasing:
        MovementComp->MaxWalkSpeed = ChasingSpeed;
        break;
    }
}

void AAI_DetectionGuard::UpdateBlackboard()
{
    // AI 컨트롤러 및 블랙보드 가져오기
    if (!AIController)
    {
        return;
    }

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    if (!BlackboardComp)
    {
        return;
    }

    // 블랙보드 값 업데이트
    BlackboardComp->SetValueAsInt("DetectionCount", DetectionCount);
    BlackboardComp->SetValueAsEnum("AlertLevel", (uint8)GuardAlertLevel);

    // 플레이어 위치 정보가 있을 경우 업데이트
    if (!LastKnownPlayerLocation.IsZero())
    {
        BlackboardComp->SetValueAsVector("PlayerLocation", LastKnownPlayerLocation);
    }
}

void AAI_DetectionGuard::StopChasing()
{
    UE_LOG(LogTemp, Warning, TEXT("%s stopped chasing player"), *GetName());

    // 감지 카운트 초기화
    DetectionCount = 0;

    // 경계 수준 업데이트
    UpdateAlertLevel();

    // 블랙보드 값 초기화
    if (AIController)
    {
        UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
        if (BlackboardComp)
        {
            // 홈 위치 가져오기
            FVector HomeLocation = BlackboardComp->GetValueAsVector("HomeLocation");

            // 홈 위치가 설정되지 않았으면 현재 위치 사용
            if (HomeLocation.IsZero())
            {
                HomeLocation = GetActorLocation();
            }

            // 블랙보드 값 리셋
            BlackboardComp->SetValueAsBool("CanSeePlayer", false);
            BlackboardComp->SetValueAsBool("IsInvestigating", false);

            // 홈 위치로 이동
            AIController->MoveToLocation(HomeLocation, -1.0f, true, true, false, true);
        }
    }
}