#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h" // 올바른 헤더 파일로 변경
#include "BTTask_StopChasing.generated.h"

/**
 * 플레이어 추적을 중단하는 비헤이비어 트리 태스크
 */
UCLASS()
class SCC_UEAI_LECTURE_API UBTTask_StopChasing : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UBTTask_StopChasing();

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};