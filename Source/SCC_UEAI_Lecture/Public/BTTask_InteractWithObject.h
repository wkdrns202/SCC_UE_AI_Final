#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_InteractWithObject.generated.h"

// 상호작용 가능한 오브젝트를 위한 인터페이스
// 언리얼 엔진에서는 인터페이스를 정의할 때 특이하게 U와 I 두 개의 클래스를 함께 정의해야 합니다.
// U는 언리얼 엔진에게 "이것은 인터페이스다"라고 알려주는 등록증과 같습니다.
UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveObject : public UInterface
{
    GENERATED_BODY()
};

// I는 실제 계약서로, "이 인터페이스를 구현하는 모든 클래스는 이런 기능을 반드시 가져야 한다"라는 명세서입니다.
class IInteractiveObject
{
    GENERATED_BODY()

public:
    // 상호작용 메서드 (인터랙션이 일어나는 상대 오브젝트에서 반드시 구현해야 함)
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
    void Interact(AActor* Interactor);
};

UCLASS()
class SCC_UEAI_LECTURE_API UBTTask_InteractWithObject : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UBTTask_InteractWithObject();

    // 태스크의 실행 로직
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "Animation", meta = (DisplayName = "Interaction Montage"))
    UAnimMontage* InteractionMontage;

private:
    // 상호작용 애니메이션 지속 시간
    UPROPERTY(EditAnywhere, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
    float InteractionDuration = 2.0f;

    // 상호작용 거리
    UPROPERTY(EditAnywhere, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
    float InteractionDistance = 150.0f;
};
