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

    // �½�ũ�� ���� ����
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
    // Ž�� �ݰ�
    UPROPERTY(EditAnywhere, Category = "Search", meta = (AllowPrivateAccess = "true"))
    float SearchRadius = 1000.0f;

    // ��ȣ�ۿ� ������ ������Ʈ�� �±�
    UPROPERTY(EditAnywhere, Category = "Search", meta = (AllowPrivateAccess = "true"))
    FName InteractiveObjectTag = "Interactive";
};