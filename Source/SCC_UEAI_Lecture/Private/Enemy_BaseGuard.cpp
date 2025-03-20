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

    // Pawn ���� ������Ʈ ����
    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
    PawnSensingComponent->SetPeripheralVisionAngle(ViewAngle);
    PawnSensingComponent->SightRadius = SightRange;
    PawnSensingComponent->HearingThreshold = 1500.0f;
    PawnSensingComponent->LOSHearingThreshold = 3000.0f;
    PawnSensingComponent->SensingInterval = 1.0f;
    PawnSensingComponent->bOnlySensePlayers = false;
    PawnSensingComponent->SightRadius = 1500.0f;


    // Perception �ʱ�ȭ
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    /*
    // ���� ���� ���Ǿ� ������Ʈ
    DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    DetectionSphere->SetupAttachment(RootComponent);
    DetectionSphere->SetSphereRadius(DetectionRange);
    DetectionSphere->SetCollisionProfileName(TEXT("Trigger"));
    */
    // �⺻ �Ӽ� �ʱ�ȭ
    CurrentAlertLevel = EAlertLevel::Normal;
    TimeInCurrentAlertLevel = 0.0f;
    LastKnownPlayerLocation = FVector::ZeroVector;
    TargetPlayer = nullptr;

    AIClass = TEXT("Class");
}

void AEnemy_BaseGuard::BeginPlay()
{
    Super::BeginPlay();

    // AI ��Ʈ�ѷ� ȹ��
    GuardController = Cast<AAIController>(GetController());

    GameMode = GetWorld()->GetAuthGameMode(); // ĳ���� ���� �⺻ Ÿ������ ����
    /*
    // �������̽� Ȯ�� �� ���
    if (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()))
    {
        // �������̽� ȣ��
        IGameRulesInterface::Execute_ReportPlayerCapture(GameMode, TargetPlayer, this);
    }

    UE_LOG(LogTemp, Warning, TEXT("#1 InterfaceTest: GameMode Valid=%s, Interface Implement=%s, Remaining Live(s)=%d"),
        GameMode ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? IGameRulesInterface::Execute_ReportCurrentLives(GameMode) : -1);
    */
    // PawnSensing �̺�Ʈ ���ε�
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemy_BaseGuard::OnSeePlayer);
        PawnSensingComponent->OnHearNoise.RemoveAll(this); // �����ϰ� Hear�� �ʱ�ȭ
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &AEnemy_BaseGuard::OnHearNoise);
    }

    // AI ���� �̺�Ʈ ���ε�
    if (AIPerceptionComponent)
    {
        AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemy_BaseGuard::OnTargetPerceptionUpdated);
    }
    // GetWorldTimerManager().SetTimer(TestTimerHandle, this, &AEnemy_BaseGuard::Test, 1.0f, true);
}


void AEnemy_BaseGuard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ��� ���ؿ� ���� �ൿ ������Ʈ
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
        // �÷��̾� ĸó Ȯ��
        if (TargetPlayer && FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation()) <= CaptureRange)
        {
            UE_LOG(LogTemp, Error, TEXT("Player Captured"));
            CapturePlayer();
        }
        break;
    }

    // ��� �ð� ������Ʈ
    TimeInCurrentAlertLevel += DeltaTime;
}

void AEnemy_BaseGuard::OnPlayerDetected(APawn* DetectedPawn)
{
    UE_LOG(LogTemp, Error, TEXT("Player Detected"));
    if (!DetectedPawn)
        return;

    // DetectableInterface�� �����Ǿ� �ִ��� Ȯ��
    if (DetectedPawn->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()))
    {
        // Execute_ ���λ縦 ����Ͽ� �������̽� �޼��� ȣ��
        if (IDetectableInterface::Execute_CanBeDetected(DetectedPawn))
        {
            LastKnownPlayerLocation = DetectedPawn->GetActorLocation();
            TargetPlayer = DetectedPawn;

            // ��� ���� ������Ʈ
            SetAlertLevel(EAlertLevel::Pursuit);

            // �ٸ� ���忡�� �˸�
            AlertOtherGuards(LastKnownPlayerLocation);
        }

        else if (!IDetectableInterface::Execute_CanBeDetected(DetectedPawn))
        {
            UE_LOG(LogTemp, Error, TEXT("But the Player Can't be detected"));
            // �����·� ����
            SetAlertLevel(EAlertLevel::Alert);
            // ������ ��� ������ �߰� ��ġ�� �̵�.
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

            // ������ ���� ��� ���� ����
            if (Volume > 0.7f)
            {
                SetAlertLevel(EAlertLevel::Alert);
            }
            else if (Volume > 0.3f)
            {
                SetAlertLevel(EAlertLevel::Suspicious);
            }

            // �ٸ� ���忡�� �˸�
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
    // �̹� �� ���� ��� �����̸� ����
    if (static_cast<uint8>(CurrentAlertLevel) >= static_cast<uint8>(NewAlertLevel))
        return;

    CurrentAlertLevel = NewAlertLevel;
    TimeInCurrentAlertLevel = 0.0f;

    // ��� Ÿ�̸� ����
    ResetAlertTimer();

    // ��� ���ؿ� ���� �ӵ� ����
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

    // �÷��̾� ����
    GuardController->MoveToActor(TargetPlayer, -1.0f, true, true, true);

    // �ֱ������� �ٸ� ���忡�� ���� ����
    if (FMath::RandBool()) // 50% Ȯ���� ȣ�� (Ʈ���� ����)
    {
        AlertOtherGuards(TargetPlayer->GetActorLocation());
    }
}

void AEnemy_BaseGuard::InvestigateLastKnownLocation()
{
    if (!GuardController || LastKnownPlayerLocation.IsZero())
        return;

    // ������ �˷��� ��ġ�� �̵�
    GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);

    // �������� �����ߴ��� Ȯ��
    float DistanceToTarget = FVector::Dist(GetActorLocation(), LastKnownPlayerLocation);
    if (DistanceToTarget < 100.0f)
    {
        // �ֺ� ���� ��ġ �����Ͽ� �߰� Ž��
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
    // �� �޼���� �Ļ� Ŭ�������� �����ؾ� �մϴ� (���� �Լ�)
    // �� ���� �������� �ٸ� ���� ���� ����
}

void AEnemy_BaseGuard::CapturePlayer()
{
    if (!TargetPlayer || !GameMode)
        return;

    UE_LOG(LogTemp, Warning, TEXT("#2 InterfaceTest: GameMode Valid=%s, Interface Implement=%s, Remaining Live(s)=%d"),
        GameMode ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? TEXT("Success") : TEXT("Fail"),
        (GameMode && GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass())) ? IGameRulesInterface::Execute_ReportCurrentLives(GameMode) : -1);

    // �������̽� ���
    if (TargetPlayer->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()))
    {
        // �÷��̾� ĸó ó��
        IDetectableInterface::Execute_CapturedByAI(TargetPlayer);

        // ��� ���� �ʱ�ȭ
        SetAlertLevel(EAlertLevel::Normal);

        // ��� �� ���� �簳
        LastKnownPlayerLocation = FVector::ZeroVector;
        TargetPlayer = nullptr;
    }
}

void AEnemy_BaseGuard::AlertOtherGuards(const FVector& LocationToInvestigate)
{
    // �ٸ� ���� ã��
    TArray<AActor*> Guards;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_BaseGuard::StaticClass(), Guards);
    UE_LOG(LogTemp, Warning, TEXT("Communication Started"));
    // �� ���忡�� ���� ����
    for (AActor* Guard : Guards)
    {
        if (Guard != this)
        {
            // ��� ���� ���� �ִ��� Ȯ��
            float Distance = FVector::Dist(GetActorLocation(), Guard->GetActorLocation());
            if (Distance <= CommunicationRange)
            {
                // �������̽� ���� Ȯ��
                if (Guard->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()))
                {
                    // �������̽� �߽� ȣ���̹Ƿ� �ݵ�� Execute_ ���λ� ���
                    IGuardInterface::Execute_ReceiveAlert(Guard, LocationToInvestigate, static_cast<uint8>(CurrentAlertLevel), this); 
                    // UE_LOG(LogTemp, Warning, TEXT("Communication Compeleted"));
                }
            }
        }
    }
}

void AEnemy_BaseGuard::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // �ڱ� ������ ���� ó��
    if (Stimulus.WasSuccessfullySensed())
    {
        APawn* DetectedPawn = Cast<APawn>(Actor);
        if (DetectedPawn)
        {
            // �ð� �ڱ�
            if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
            {
                OnSeePlayer(DetectedPawn);
            }
            // û�� �ڱ�
            else if (Stimulus.Type == UAISense::GetSenseID<UAISense_Hearing>())
            {
                OnHearNoise(DetectedPawn, Stimulus.StimulusLocation, Stimulus.Strength);
            }
        }
    }
}

void AEnemy_BaseGuard::ResetAlertTimer()
{
    // ���� Ÿ�̸� ���
    GetWorldTimerManager().ClearTimer(AlertTimerHandle);

    // �˸� ���°� �ƴϸ� Ÿ�̸� ���� �� ��
    if (CurrentAlertLevel == EAlertLevel::Normal)
        return;

    // �� Ÿ�̸� ����
    GetWorldTimerManager().SetTimer(AlertTimerHandle, this, &AEnemy_BaseGuard::HandleAlertTimeout, AlertTimeout, false);
}

void AEnemy_BaseGuard::HandleAlertTimeout()
{
    // ������ �ð� �� ��� ���� �ٿ�׷��̵�
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

// �������̽� ���� �޼����
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
    // ���� ���� ó��
    LastKnownPlayerLocation = Location;
    UE_LOG(LogTemp, Warning, TEXT("Alert Received. The Last Known Location is: %s"), *LastKnownPlayerLocation.ToString());

    // �ش��������� ����
    if (GuardController)
    {
        GuardController->MoveToLocation(LastKnownPlayerLocation, -1.0f, true, true, true);
    }

    // ���� ��� �������� ���� ��쿡�� ������Ʈ
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
// �������̽� �۵� ���� �� ������ �ڵ�. �۵� Ȯ�εǸ� �ּ�ó�� ����.
void AEnemy_BaseGuard::Test()
{
    // ���� Ÿ�� �÷��̾� ���� �� ���
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

    // ���� ��� ���� Ȯ��
    UE_LOG(LogTemp, Warning, TEXT("Current Alert Level: %d"), static_cast<int32>(CurrentAlertLevel));

    // �þ� ���� �����
    if (PawnSensingComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("Sight Radius: %f"), PawnSensingComponent->SightRadius);
        UE_LOG(LogTemp, Warning, TEXT("Peripheral Vision Angle: %f"), PawnSensingComponent->GetPeripheralVisionAngle());
    }

    // ���� ����� �÷��̾� ã��
    APawn* NearestPlayer = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (NearestPlayer)
    {
        float Distance = FVector::Dist(GetActorLocation(), NearestPlayer->GetActorLocation());
        UE_LOG(LogTemp, Error, TEXT("Nearest Player Distance: %f"), Distance);
    }
}*/
