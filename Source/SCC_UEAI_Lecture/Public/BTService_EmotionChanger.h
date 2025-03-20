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
    // 감정에 따른 이동속도 가감률
    UPROPERTY(BlueprintReadOnly, Category = "AI")
    float SpeedModifier;

protected:
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
    // 감정 변화 확률(0.0-1.0)설정. Test를 위해 100%로 설정함.
    UPROPERTY(EditAnywhere, Category = "Emotion", meta = (AllowPrivateAccess = "true"))
    float EmotionChangeChance = 1.0f;

    // 블랙보드 키 - 감정 상태
    UPROPERTY(EditAnywhere, Category = "Emotion", meta = (AllowPrivateAccess = "true"))
    FName EmotionalStateKey = "EmotionalState";

    // 랜덤 감정 상태 선택
    EEmotionalState GetRandomEmotionalState();
};