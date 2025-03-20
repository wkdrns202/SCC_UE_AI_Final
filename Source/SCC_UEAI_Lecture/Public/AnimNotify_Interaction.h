#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Interaction.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API UAnimNotify_Interaction : public UAnimNotify
{
    GENERATED_BODY()

public:
    // ��Ƽ���̰� Ʈ���ŵ� �� ȣ��Ǵ� �Լ�
    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

    // ��ȣ�ۿ� ����� ������ �Ӽ� (�ɼ�)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    FName InteractionType;
};