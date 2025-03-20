#include "BTService_UpdateAlertLevel.h"
#include "AI_DetectionGuard.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_UpdateAlertLevel::UBTService_UpdateAlertLevel()
{
    NodeName = "Update Alert Level";
    Interval = 0.5f; // 0.5초마다 업데이트
}

void UBTService_UpdateAlertLevel::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    // AI 컨트롤러 가져오기
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController)
    {
        return;
    }

    // AI_DetectionGuard 가져오기
    AAI_DetectionGuard* Guard = Cast<AAI_DetectionGuard>(AIController->GetPawn());
    if (!Guard)
    {
        return;
    }

    // 블랙보드 업데이트
    Guard->UpdateBlackboard();
}