#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BTTask_InteractWithObject.h" // 인터페이스 정의가 있는 사전구현 헤더
#include "InteractiveBox.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AInteractiveBox : public AActor, public IInteractiveObject
{
    GENERATED_BODY()

public:
    // 생성자
    AInteractiveBox();

protected:
    // 게임 시작 시 호출
    virtual void BeginPlay() override;

public:
    // 매 프레임 호출
    virtual void Tick(float DeltaTime) override;

    // 인터페이스 함수 구현 (인터랙티브 피동 주체 오브젝트에서 반드시 구현해야하는 파트)
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
    void Interact(AActor* Interactor);

    // 상호작용 시 발생할 이벤트를 블루프린트에서 구현할 수 있게 함
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsActive;

    // 시각적 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // 머티리얼 레퍼런스 변수. 에디터에서 설정 후 테스트.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* ActiveMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* InactiveMaterial;
};