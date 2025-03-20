#include "NPC_AIController.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

// ������� Ű ����
const FName ANPC_AIController::SearchLocationKey = "SearchLocation";

ANPC_AIController::ANPC_AIController()
{
    bPatrolPointReady = false;
    bFoundTargetPoint = false;  // �ʱ�ȭ
    PrimaryActorTick.bCanEverTick = true;
}

void ANPC_AIController::BeginPlay()
{
    Super::BeginPlay();
    InitializePatrolPoint();
    UBlackboardComponent* BB = GetBlackboardComponent();
    if (BB && bFoundTargetPoint)  // �����Ͱ� �ƴ� �Ҹ��� ������ Ȯ��
    {
        BB->SetValueAsVector(SearchLocationKey, FoundTargetPoint);  // �� Ÿ���̹Ƿ� * ������ ����
    }
}

void ANPC_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    APawn* ControlledPawn = GetPawn();
    if (ControlledPawn && bFoundTargetPoint)
    {
        float Distance = FVector::Dist(ControlledPawn->GetActorLocation(), FoundTargetPoint);
        if (Distance <= 100.0f)
        {
            // �̹� ����� ���¶�� DestroyLogic ����
            FTimerHandle DestroyTimerHandle;
            GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &ANPC_AIController::DestroyLogic, 3.0f, false);
        }
    }
}

void ANPC_AIController::InitializePatrolPoint()
{
    AActor* TargetPointActor = UGameplayStatics::GetActorOfClass(GetWorld(), ATargetPoint::StaticClass());
    bool bFound = (TargetPointActor != nullptr);
    if (bFound && TargetPointActor)
    {
        FoundTargetPoint = TargetPointActor->GetActorLocation();  // �� Ÿ�Կ� ���� �Ҵ�
        bFoundTargetPoint = true;  // Ÿ�� ����Ʈ�� ã������ ǥ��
    }
    UE_LOG(LogTemp, Warning, TEXT("PatrolPoint Collected"));
    bPatrolPointReady = true;

}

void ANPC_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    if (BehaviorTree)
    {
        UseBlackboard(BehaviorTree->BlackboardAsset, BlackboardComponent);
        RunBehaviorTree(BehaviorTree);
    }
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &ANPC_AIController::InitializePatrolPoint, 0.5f, false);
}

void ANPC_AIController::DestroyLogic()
{
    APawn* ControlledPawn = GetPawn();
    if (ControlledPawn)
    {
        ControlledPawn->Destroy();  // ���� ����
    }
}