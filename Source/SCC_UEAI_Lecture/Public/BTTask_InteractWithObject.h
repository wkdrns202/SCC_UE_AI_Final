#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_InteractWithObject.generated.h"

// ��ȣ�ۿ� ������ ������Ʈ�� ���� �������̽�
// �𸮾� ���������� �������̽��� ������ �� Ư���ϰ� U�� I �� ���� Ŭ������ �Բ� �����ؾ� �մϴ�.
// U�� �𸮾� �������� "�̰��� �������̽���"��� �˷��ִ� ������� �����ϴ�.
UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveObject : public UInterface
{
    GENERATED_BODY()
};

// I�� ���� ��༭��, "�� �������̽��� �����ϴ� ��� Ŭ������ �̷� ����� �ݵ�� ������ �Ѵ�"��� �����Դϴ�.
class IInteractiveObject
{
    GENERATED_BODY()

public:
    // ��ȣ�ۿ� �޼��� (���ͷ����� �Ͼ�� ��� ������Ʈ���� �ݵ�� �����ؾ� ��)
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
    void Interact(AActor* Interactor);
};

UCLASS()
class SCC_UEAI_LECTURE_API UBTTask_InteractWithObject : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UBTTask_InteractWithObject();

    // �½�ũ�� ���� ����
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "Animation", meta = (DisplayName = "Interaction Montage"))
    UAnimMontage* InteractionMontage;

private:
    // ��ȣ�ۿ� �ִϸ��̼� ���� �ð�
    UPROPERTY(EditAnywhere, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
    float InteractionDuration = 2.0f;

    // ��ȣ�ۿ� �Ÿ�
    UPROPERTY(EditAnywhere, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
    float InteractionDistance = 150.0f;
};
