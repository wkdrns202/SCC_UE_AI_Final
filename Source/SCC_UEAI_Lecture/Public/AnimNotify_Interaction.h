#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Interaction.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API UAnimNotify_Interaction : public UAnimNotify
{
    GENERATED_BODY()

public:
    // 노티파이가 트리거될 때 호출되는 함수
    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

    // 상호작용 대상을 저장할 속성 (옵션)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    FName InteractionType;
};