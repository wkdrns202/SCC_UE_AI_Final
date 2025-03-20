#include "BTTask_StopChasing.h"
#include "AI_DetectionGuard.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_StopChasing::UBTTask_StopChasing()
{
    NodeName = "Stop Chasing Player";
}

EBTNodeResult::Type UBTTask_StopChasing::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // AI 컨트롤러 가져오기
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController)
    {
        return EBTNodeResult::Failed;
    }

    // AI_DetectionGuard 가져오기
    AAI_DetectionGuard* Guard = Cast<AAI_DetectionGuard>(AIController->GetPawn());
    if (!Guard)
    {
        return EBTNodeResult::Failed;
    }

    // 추적 중단 함수 호출
    Guard->StopChasing();

    // 블랙보드에 플래그 설정
    UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsBool("CanSeePlayer", false);
        BlackboardComp->SetValueAsBool("IsInvestigating", false);
    }

    UE_LOG(LogTemp, Warning, TEXT("BT Task: Stopped chasing player"));

    return EBTNodeResult::Succeeded;
}