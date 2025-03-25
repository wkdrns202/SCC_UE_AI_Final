#include "CoolGuyAICharacter.h"


// Sets default values
ACoolGuyAICharacter::ACoolGuyAICharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // AI �ڵ� ���� ����
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void ACoolGuyAICharacter::BeginPlay()
{
    Super::BeginPlay();

    // AI ��Ʈ�ѷ� �� �������� �ʱ�ȭ

    AIController = Cast<ACoolGuyAIController>(GetController());

    if (AIController)
    {
        // Behavior Tree�� Blackboard �Ҵ� ���� ���¸� null ��ȯ����.
        BlackboardComp = AIController->GetBlackboardComponent();
        UE_LOG(LogTemp, Warning, TEXT("�������� �ʱ�ȭ. The Name is : %s"), *BlackboardComp->GetName());
    }
}

// Called every frame
void ACoolGuyAICharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Patrol Points�� �غ�Ǿ��� �� bool �������� �˸� �޵��� ����.
    if (AIController->bPatrolPointsReady)
    {
        // blackboard���� targetlocation �޾ƿ���
        CurrentTargetLocation = BlackboardComp->GetValueAsVector("PatrolLocation");
        PatrolPoints = AIController->PatrolPoints;
        AIController->bPatrolPointsReady = false; // �� �� ������Ʈ ���� �� �ݺ� ������� �ʵ��� false �ο�.
    }

    UE_LOG(LogTemp, Warning, TEXT("Current Location: %s"), *GetActorLocation().ToString());
    UE_LOG(LogTemp, Warning, TEXT("Target Location: %s"), *CurrentTargetLocation.ToString());


    // ��ǥ ������ �����ߴ��� Ȯ��
    if (PatrolPoints.Num() > 0 && IsCloseToTarget())
    {
        // ���� ��Ʈ�� ����Ʈ�� �̵�
        UE_LOG(LogTemp, Warning, TEXT("MoveToNextPatrolPoint Called at Tick"));
        MoveToNextPatrolPoint();
    }
}

// ��Ʈ�� ����Ʈ ������ ���� �Լ��߰�
void ACoolGuyAICharacter::SetPatrolPoints(const TArray<FVector>& Points)
{
    PatrolPoints = Points;

    // ù ��° ��Ʈ�� ����Ʈ ����
    if (PatrolPoints.Num() > 0)
    {


        // AI ��Ʈ�ѷ��� BeginPlay�� ���� BlackboardComp�� ����Ǿ����Ƿ� �Ʒ��� ���� ����.
        if (BlackboardComp)
        {
            UE_LOG(LogTemp, Warning, TEXT("### PatrolLocation �ֽ�ȭ"));
            BlackboardComp->SetValueAsVector("PatrolLocation", CurrentTargetLocation);
        }
    }
}

// ��ǥ ���� ���� Ȯ�� �Լ� �߰�.
bool ACoolGuyAICharacter::IsCloseToTarget(float AcceptableDistance)
{
    // ���� ��ġ�� ��ǥ ��ġ ���� �Ÿ� ���
    float Distance = FVector::Dist(GetActorLocation(), CurrentTargetLocation);
    UE_LOG(LogTemp, Warning, TEXT("Distance: %f, Acceptable Distance: 100.0f"), Distance);
    // ������� ������ �Ÿ�(AcceptableDistance)���� ������ true ��ȯ
    return Distance <= AcceptableDistance;
}

// ���� ��Ʈ�� ����Ʈ�� �̵��Լ� �߰�.
void ACoolGuyAICharacter::MoveToNextPatrolPoint()
{
    if (PatrolPoints.Num() == 0) return;
    UE_LOG(LogTemp, Warning, TEXT("MoveToNextPatrolPoint Called"));
    // ���� �ε��� ��� (������ �̵�)
    CurrentPatrolIndex = (CurrentPatrolIndex + 1) % PatrolPoints.Num();
    //UE_LOG(LogTemp, Warning, TEXT("PatrolPoints Count is : %d"), PatrolPoints.Num());
    // �� ��ǥ ��ġ ����
    CurrentTargetLocation = PatrolPoints[CurrentPatrolIndex];

    // �������忡 �� ��ġ ������Ʈ
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsVector("PatrolLocation", CurrentTargetLocation);
        UE_LOG(LogTemp, Warning, TEXT("PatrolLocation Updated"));
    }
}
