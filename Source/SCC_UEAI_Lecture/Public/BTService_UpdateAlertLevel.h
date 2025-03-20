#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateAlertLevel.generated.h"

/**
 * 지속적으로 경계 수준을 업데이트하는 비헤이비어 트리 서비스
 */
UCLASS()
class SCC_UEAI_LECTURE_API UBTService_UpdateAlertLevel : public UBTService
{
    GENERATED_BODY()

public:
    UBTService_UpdateAlertLevel();

protected:
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};