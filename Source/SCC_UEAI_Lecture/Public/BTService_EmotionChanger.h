#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EEmotionalState.h"
#include "BTService_EmotionChanger.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API UBTService_EmotionChanger : public UBTService
{
    GENERATED_BODY()

public:
    UBTService_EmotionChanger();
    // ������ ���� �̵��ӵ� ������
    UPROPERTY(BlueprintReadOnly, Category = "AI")
    float SpeedModifier;

protected:
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
    // ���� ��ȭ Ȯ��(0.0-1.0)����. Test�� ���� 100%�� ������.
    UPROPERTY(EditAnywhere, Category = "Emotion", meta = (AllowPrivateAccess = "true"))
    float EmotionChangeChance = 1.0f;

    // ������ Ű - ���� ����
    UPROPERTY(EditAnywhere, Category = "Emotion", meta = (AllowPrivateAccess = "true"))
    FName EmotionalStateKey = "EmotionalState";

    // ���� ���� ���� ����
    EEmotionalState GetRandomEmotionalState();
};