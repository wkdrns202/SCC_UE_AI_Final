#include "NPC_AIController.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

// 블랙보드 키 정의
const FName ANPC_AIController::SearchLocationKey = "SearchLocation";

ANPC_AIController::ANPC_AIController()
{
    bPatrolPointReady = false;
    bFoundTargetPoint = false;  // 초기화
    PrimaryActorTick.bCanEverTick = true;
}

void ANPC_AIController::BeginPlay()
{
    Super::BeginPlay();
    InitializePatrolPoint();
    UBlackboardComponent* BB = GetBlackboardComponent();
    if (BB && bFoundTargetPoint)  // 포인터가 아닌 불리언 값으로 확인
    {
        BB->SetValueAsVector(SearchLocationKey, FoundTargetPoint);  // 값 타입이므로 * 연산자 제거
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
            // 이미 가까운 상태라면 DestroyLogic 실행
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
        FoundTargetPoint = TargetPointActor->GetActorLocation();  // 값 타입에 직접 할당
        bFoundTargetPoint = true;  // 타겟 포인트를 찾았음을 표시
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
        ControlledPawn->Destroy();  // 폰을 삭제
    }
}