#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BTTask_InteractWithObject.h" // �������̽� ���ǰ� �ִ� �������� ���
#include "InteractiveBox.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AInteractiveBox : public AActor, public IInteractiveObject
{
    GENERATED_BODY()

public:
    // ������
    AInteractiveBox();

protected:
    // ���� ���� �� ȣ��
    virtual void BeginPlay() override;

public:
    // �� ������ ȣ��
    virtual void Tick(float DeltaTime) override;

    // �������̽� �Լ� ���� (���ͷ�Ƽ�� �ǵ� ��ü ������Ʈ���� �ݵ�� �����ؾ��ϴ� ��Ʈ)
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
    void Interact(AActor* Interactor);

    // ��ȣ�ۿ� �� �߻��� �̺�Ʈ�� �������Ʈ���� ������ �� �ְ� ��
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsActive;

    // �ð��� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // ��Ƽ���� ���۷��� ����. �����Ϳ��� ���� �� �׽�Ʈ.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* ActiveMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* InactiveMaterial;
};