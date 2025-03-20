#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindInteractiveObject.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API UBTTask_FindInteractiveObject : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UBTTask_FindInteractiveObject();

    // 태스크의 실행 로직
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
    // 탐색 반경
    UPROPERTY(EditAnywhere, Category = "Search", meta = (AllowPrivateAccess = "true"))
    float SearchRadius = 1000.0f;

    // 상호작용 가능한 오브젝트의 태그
    UPROPERTY(EditAnywhere, Category = "Search", meta = (AllowPrivateAccess = "true"))
    FName InteractiveObjectTag = "Interactive";
};