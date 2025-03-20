#include "Chaser_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"

AChaser_AIController::AChaser_AIController()
{
    // �� ������ ƽ Ȱ��ȭ
    PrimaryActorTick.bCanEverTick = true;

    // �þ� ���� ���� ����
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->SightRadius = DetectionRadius;
    SightConfig->LoseSightRadius = LoseInterestRadius;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;


}

void AChaser_AIController::BeginPlay()
{
    Super::BeginPlay();

    // ���� ������Ʈ �ʱ�ȭ �� ������Ʈ ����
    if (SightConfig && GetPerceptionComponent())
    {
        GetPerceptionComponent()->ConfigureSense(*SightConfig);
        GetPerceptionComponent()->SetDominantSense(SightConfig->GetSenseImplementation());
        GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AChaser_AIController::OnPerceptionUpdated);
    }

    // �⺻ Ÿ������ �÷��̾� ���� (������)
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (PlayerCharacter)
    {
        TargetActor = PlayerCharacter;
    }
}

void AChaser_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ���� ������Ʈ
    UpdateAIState();

    // ���� ����
    if (bIsChasing && TargetActor)
    {
        APawn* ControlledPawn = GetPawn();
        if (ControlledPawn)
        {
            float Distance = FVector::Dist(ControlledPawn->GetActorLocation(), TargetActor->GetActorLocation());

            // ���� �Ÿ� ���� ���� ���� ����
            if (Distance <= ChaseRadius)
            {
                // �÷��̾ ���� �̵�
                MoveToActor(TargetActor, 100.0f);

                // ������ ��ġ ����
                LastKnownLocation = TargetActor->GetActorLocation();

                // ����� �ð�ȭ (�ùķ��̼� �� Ȯ�ο�)
#if WITH_EDITOR
                DrawDebugLine(
                    GetWorld(),
                    ControlledPawn->GetActorLocation(),
                    TargetActor->GetActorLocation(),
                    FColor::Red,
                    false,
                    -1.0f,
                    0,
                    2.0f
                );
#endif
            }
            else if (Distance > LoseInterestRadius)
            {
                // ���� ����
                StopChasing();
            }
        }
    }
}

void AChaser_AIController::StartChasing(AActor* Target)
{
    TargetActor = Target;
    bIsChasing = true;

    if (Target)
    {
        // ������ ��ġ ������Ʈ
        LastKnownLocation = Target->GetActorLocation();
    }

    // ���� ����
    CurrentState = EAIState::Chasing;
}

void AChaser_AIController::StopChasing()
{
    bIsChasing = false;
    StopMovement();

    // ���� ����
    CurrentState = EAIState::Idle;
}

void AChaser_AIController::UpdateAIState()
{
    if (!TargetActor) return;

    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    float DistanceToTarget = FVector::Dist(ControlledPawn->GetActorLocation(), TargetActor->GetActorLocation());

    switch (CurrentState)
    {
    case EAIState::Idle:
        if (DistanceToTarget <= DetectionRadius)
        {
            CurrentState = EAIState::Suspicious;
        }
        break;

    case EAIState::Suspicious:
        if (DistanceToTarget <= ChaseRadius)
        {
            StartChasing(TargetActor);
        }
        else if (DistanceToTarget > DetectionRadius)
        {
            CurrentState = EAIState::Idle;
        }
        break;

    case EAIState::Chasing:
        if (DistanceToTarget > LoseInterestRadius)
        {
            StopChasing();
        }
        break;
    }
}

void AChaser_AIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // �÷��̾� ĳ�������� Ȯ��
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

    if (Actor == PlayerCharacter)
    {
        if (Stimulus.WasSuccessfullySensed())
        {
            // �÷��̾� ���� ����
            TargetActor = Actor;

            // �Ÿ��� ���� ���� ����
            APawn* ControlledPawn = GetPawn();
            if (ControlledPawn)
            {
                float Distance = FVector::Dist(ControlledPawn->GetActorLocation(), Actor->GetActorLocation());

                if (Distance <= ChaseRadius)
                {
                    StartChasing(Actor);
                }
                else if (Distance <= DetectionRadius)
                {
                    CurrentState = EAIState::Suspicious;
                }
            }
        }
        else
        {
            // �÷��̾� ���� ���� (�þ߿��� �����)
            if (CurrentState == EAIState::Chasing)
            {
                // ���������� �� ��ġ�� �̵�
                MoveToLocation(LastKnownLocation, 50.0f);

                // �ǽ� ���·� ��ȯ
                CurrentState = EAIState::Suspicious;
            }
        }
    }
}