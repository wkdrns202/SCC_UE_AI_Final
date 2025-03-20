#include "Enemy_BaseGuard.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/SphereComponent.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"


AEnemy_BaseGuard::AEnemy_BaseGuard()
{
    PrimaryActorTick.bCanEverTick = true;

    // Pawn 감지 컴포넌트 설정
    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
    PawnSensingComponent->SetPeripheralVisionAngle(ViewAngle);
    PawnSensingComponent->SightRadius = SightRange;
    PawnSensingComponent->HearingThreshold = 1500.0f;
    PawnSensingComponent->LOSHearingThreshold = 3000.0f;
    PawnSensingComponent->SensingInterval = 1.0f;
    PawnSensingComponent->bOnlySensePlayers = false;
    PawnSensingComponent->SightRadius = 1500.0f;


    // Perception 초기화
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    /*
    // 감지 범위 스피어 컴포넌트
    DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    DetectionSphere->SetupAttachment(RootComponent);
    DetectionSphere->SetSphereRadius(DetectionRange);
    DetectionSphere->SetCollisionProfileName(TEXT("Trigger"));
    */
    // 기본 속성 초기화
    CurrentAlertLevel = EAlertLevel::Normal;
    TimeInCurrentAlertLevel = 0.0f;
    LastKnownPlayerLocation = FVector::ZeroVector;
    TargetPlayer = nullptr;

    AIClass = TEXT("Class");
}

void AEnemy_BaseGuard::BeginPlay()
{
    Super::BeginPlay();

    // AI 컨트롤러 획득
    GuardController = Cast<AAIController>(GetController());

    GameMode = GetWorld()->GetAuthGameMode(); // 캐스팅 없이 기본 타입으로 받음
    /*
    // 인터페이스 확인 후 사용
    if (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()))
    {
        // 인터페이스 호출
        IGameRulesInterface::Execute_ReportPlayerCapture(GameMode, TargetPlayer, this);
    }

    UE_LOG(LogTemp, Warning, TEXT("#1 InterfaceTest: GameMode Valid=%s, Interface Implement=%s, Remaining Live(s)=%d"),
        GameMode ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? IGameRulesInterface::Execute_ReportCurrentLives(GameMode) : -1);
    */
    // PawnSensing 이벤트 바인딩
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemy_BaseGuard::OnSeePlayer);
        PawnSensingComponent->OnHearNoise.RemoveAll(this); // 안전하게 Hear은 초기화
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &AEnemy_BaseGuard::OnHearNoise);
    }

    // AI 인지 이벤트 바인딩
    if (AIPerceptionComponent)
    {
        AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemy_BaseGuard::OnTargetPerceptionUpdated);
    }
    // GetWorldTimerManager().SetTimer(TestTimerHandle, this, &AEnemy_BaseGuard::Test, 1.0f, true);
}


void AEnemy_BaseGuard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 경계 수준에 따른 행동 업데이트
    switch (CurrentAlertLevel)
    {
    case EAlertLevel::Normal:
        Patrol();
        break;
    case EAlertLevel::Suspicious:
        InvestigateLastKnownLocation();
        break;
    case EAlertLevel::Alert:
        InvestigateLastKnownLocation();
        break;
    case EAlertLevel::Pursuit:
        PursuePlayer();
        // 플레이어 캡처 확인
        if (TargetPlayer && FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation()) <= CaptureRange)
        {
            UE_LOG(LogTemp, Error, TEXT("Player Captured"));
            CapturePlayer();
        }
        break;
    }

    // 경계 시간 업데이트
    TimeInCurrentAlertLevel += DeltaTime;
}

void AEnemy_BaseGuard::OnPlayerDetected(APawn* DetectedPawn)
{
    UE_LOG(LogTemp, Error, TEXT("Player Detected"));
    if (!DetectedPawn)
        return;

    // DetectableInterface가 구현되어 있는지 확인
    if (DetectedPawn->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()))
    {
        // Execute_ 접두사를 사용하여 인터페이스 메서드 호출
        if (IDetectableInterface::Execute_CanBeDetected(DetectedPawn))
        {
            LastKnownPlayerLocation = DetectedPawn->GetActorLocation();
            TargetPlayer = DetectedPawn;

            // 경계 수준 업데이트
            SetAlertLevel(EAlertLevel::Pursuit);

            // 다른 가드에게 알림
            AlertOtherGuards(LastKnownPlayerLocation);
        }

        else if (!IDetectableInterface::Execute_CanBeDetected(DetectedPawn))
        {
            UE_LOG(LogTemp, Error, TEXT("But the Player Can't be detected"));
            // 경계상태로 세팅
            SetAlertLevel(EAlertLevel::Alert);
            // 못잡을 경우 마지막 발견 위치로 이동.
            GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);
        }
    }
}

void AEnemy_BaseGuard::OnHearNoise(APawn* NoiseMaker, const FVector& Location, float Volume)
{
    UE_LOG(LogTemp, Error, TEXT("AI Heard Something##############"));
    if (!NoiseMaker)
        return;

    if (NoiseMaker->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()))
    {
        if (IDetectableInterface::Execute_CanMakeNoise(NoiseMaker))
        {
            LastKnownPlayerLocation = Location;

            // 볼륨에 따른 경계 수준 설정
            if (Volume > 0.7f)
            {
                SetAlertLevel(EAlertLevel::Alert);
            }
            else if (Volume > 0.3f)
            {
                SetAlertLevel(EAlertLevel::Suspicious);
            }

            // 다른 가드에게 알림
            if (Volume > 0.5f)
            {
                AlertOtherGuards(Location);
            }
        }
    }
}

void AEnemy_BaseGuard::OnSeePlayer(APawn* SeenPawn)
{
    OnPlayerDetected(SeenPawn);
}

void AEnemy_BaseGuard::SetAlertLevel(EAlertLevel NewAlertLevel)
{
    // 이미 더 높은 경계 수준이면 유지
    if (static_cast<uint8>(CurrentAlertLevel) >= static_cast<uint8>(NewAlertLevel))
        return;

    CurrentAlertLevel = NewAlertLevel;
    TimeInCurrentAlertLevel = 0.0f;

    // 경계 타이머 설정
    ResetAlertTimer();

    // 경계 수준에 따른 속도 조정
    if (CurrentAlertLevel == EAlertLevel::Pursuit)
    {
        GetCharacterMovement()->MaxWalkSpeed = PursuitSpeed;
    }
    else
    {
        GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
    }
}

void AEnemy_BaseGuard::PursuePlayer()
{
    if (!GuardController || !TargetPlayer)
        return;

    if (AIClass != "Police")
        return;

    // 플레이어 추적
    GuardController->MoveToActor(TargetPlayer, -1.0f, true, true, true);

    // 주기적으로 다른 가드에게 정보 전달
    if (FMath::RandBool()) // 50% 확률로 호출 (트래픽 제한)
    {
        AlertOtherGuards(TargetPlayer->GetActorLocation());
    }
}

void AEnemy_BaseGuard::InvestigateLastKnownLocation()
{
    if (!GuardController || LastKnownPlayerLocation.IsZero())
        return;

    // 마지막 알려진 위치로 이동
    GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);

    // 목적지에 도착했는지 확인
    float DistanceToTarget = FVector::Dist(GetActorLocation(), LastKnownPlayerLocation);
    if (DistanceToTarget < 100.0f)
    {
        // 주변 랜덤 위치 생성하여 추가 탐색
        UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
        if (NavSystem)
        {
            FNavLocation RandomLocation;
            if (NavSystem->GetRandomPointInNavigableRadius(LastKnownPlayerLocation, 300.0f, RandomLocation))
            {
                LastKnownPlayerLocation = RandomLocation.Location;
            }
        }
    }
}

void AEnemy_BaseGuard::Patrol()
{
    // 이 메서드는 파생 클래스에서 구현해야 합니다 (가상 함수)
    // 각 가드 유형별로 다른 순찰 패턴 구현
}

void AEnemy_BaseGuard::CapturePlayer()
{
    if (!TargetPlayer || !GameMode)
        return;

    UE_LOG(LogTemp, Warning, TEXT("#2 InterfaceTest: GameMode Valid=%s, Interface Implement=%s, Remaining Live(s)=%d"),
        GameMode ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? IGameRulesInterface::Execute_ReportCurrentLives(GameMode) : -1);

    // 인터페이스 사용
    if (TargetPlayer->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()))
    {
        // 플레이어 캡처 처리
        IDetectableInterface::Execute_CapturedByAI(TargetPlayer);

        // 경계 수준 초기화
        SetAlertLevel(EAlertLevel::Normal);

        // 잠시 후 순찰 재개
        LastKnownPlayerLocation = FVector::ZeroVector;
        TargetPlayer = nullptr;
    }
}

void AEnemy_BaseGuard::AlertOtherGuards(const FVector& LocationToInvestigate)
{
    // 다른 가드 찾기
    TArray<AActor*> Guards;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_BaseGuard::StaticClass(), Guards);
    UE_LOG(LogTemp, Warning, TEXT("Communication Started"));
    // 각 가드에게 정보 전달
    for (AActor* Guard : Guards)
    {
        if (Guard != this)
        {
            // 통신 범위 내에 있는지 확인
            float Distance = FVector::Dist(GetActorLocation(), Guard->GetActorLocation());
            if (Distance <= CommunicationRange)
            {
                // 인터페이스 구현 확인
                if (Guard->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()))
                {
                    // 인터페이스 발신 호출이므로 반드시 Execute_ 접두사 사용
                    IGuardInterface::Execute_ReceiveAlert(Guard, LocationToInvestigate, static_cast<uint8>(CurrentAlertLevel), this); 
                    // UE_LOG(LogTemp, Warning, TEXT("Communication Compeleted"));
                }
            }
        }
    }
}

void AEnemy_BaseGuard::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // 자극 종류에 따른 처리
    if (Stimulus.WasSuccessfullySensed())
    {
        APawn* DetectedPawn = Cast<APawn>(Actor);
        if (DetectedPawn)
        {
            // 시각 자극
            if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
            {
                OnSeePlayer(DetectedPawn);
            }
            // 청각 자극
            else if (Stimulus.Type == UAISense::GetSenseID<UAISense_Hearing>())
            {
                OnHearNoise(DetectedPawn, Stimulus.StimulusLocation, Stimulus.Strength);
            }
        }
    }
}

void AEnemy_BaseGuard::ResetAlertTimer()
{
    // 기존 타이머 취소
    GetWorldTimerManager().ClearTimer(AlertTimerHandle);

    // 알림 상태가 아니면 타이머 설정 안 함
    if (CurrentAlertLevel == EAlertLevel::Normal)
        return;

    // 새 타이머 설정
    GetWorldTimerManager().SetTimer(AlertTimerHandle, this, &AEnemy_BaseGuard::HandleAlertTimeout, AlertTimeout, false);
}

void AEnemy_BaseGuard::HandleAlertTimeout()
{
    // 정해진 시간 후 경계 수준 다운그레이드
    switch (CurrentAlertLevel)
    {
    case EAlertLevel::Pursuit:
        SetAlertLevel(EAlertLevel::Alert);
        break;
    case EAlertLevel::Alert:
        SetAlertLevel(EAlertLevel::Suspicious);
        break;
    case EAlertLevel::Suspicious:
        SetAlertLevel(EAlertLevel::Normal);
        break;
    default:
        break;
    }
}

// 인터페이스 구현 메서드들
FVector AEnemy_BaseGuard::GetLastKnownPlayerLocation_Implementation() const
{
    return LastKnownPlayerLocation;
}

uint8 AEnemy_BaseGuard::GetAlertLevel_Implementation() const
{
    return static_cast<uint8>(CurrentAlertLevel);
}

APawn* AEnemy_BaseGuard::GetTargetPlayer_Implementation() const
{
    return TargetPlayer;
}

void AEnemy_BaseGuard::ReceiveAlert_Implementation(const FVector& Location, uint8 AlertLevel, AActor* AlertSource)
{
    // 정보 수신 처리
    LastKnownPlayerLocation = Location;
    UE_LOG(LogTemp, Warning, TEXT("Alert Received. The Last Known Location is: %s"), *LastKnownPlayerLocation.ToString());

    // 해당지점으로 집결
    if (GuardController)
    {
        GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);
    }

    // 기존 경계 레벨보다 높을 경우에만 업데이트
    if (AlertLevel > static_cast<uint8>(CurrentAlertLevel))
    {
        SetAlertLevel(static_cast<EAlertLevel>(AlertLevel));
    }
}

void AEnemy_BaseGuard::Persuaded_Implementation()
{
    // These will now work because the method is now a member method of AEnemy_BaseGuard
    TargetPlayer = nullptr;
    SetAlertLevel(EAlertLevel::Normal);

    if (GuardController)
    {
        GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);
    }
}
/*
// 인터페이스 작동 여부 등 디버깅용 코드. 작동 확인되면 주석처리 가능.
void AEnemy_BaseGuard::Test()
{
    // 현재 타겟 플레이어 정보 상세 출력
    if (TargetPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Target Player Info:"));
        UE_LOG(LogTemp, Error, TEXT("Player Name: %s"), *TargetPlayer->GetName());
        UE_LOG(LogTemp, Error, TEXT("Player Location: %s"), *TargetPlayer->GetActorLocation().ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No Target Player Detected"));
    }

    // 현재 경계 수준 확인
    UE_LOG(LogTemp, Warning, TEXT("Current Alert Level: %d"), static_cast<int32>(CurrentAlertLevel));

    // 시야 관련 디버깅
    if (PawnSensingComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("Sight Radius: %f"), PawnSensingComponent->SightRadius);
        UE_LOG(LogTemp, Warning, TEXT("Peripheral Vision Angle: %f"), PawnSensingComponent->GetPeripheralVisionAngle());
    }

    // 가장 가까운 플레이어 찾기
    APawn* NearestPlayer = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (NearestPlayer)
    {
        float Distance = FVector::Dist(GetActorLocation(), NearestPlayer->GetActorLocation());
        UE_LOG(LogTemp, Error, TEXT("Nearest Player Distance: %f"), Distance);
    }
}*/
