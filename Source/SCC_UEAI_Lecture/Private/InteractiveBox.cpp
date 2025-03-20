#include "InteractiveBox.h"

AInteractiveBox::AInteractiveBox()
{
    PrimaryActorTick.bCanEverTick = true;

    // 메시 컴포넌트 생성 및 설정
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // 태그 추가. 에디터에서 추가해도 됨.
    Tags.Add(FName("Interactive"));

    // 초기 상태 설정
    bIsActive = false;
}

void AInteractiveBox::BeginPlay()
{
    Super::BeginPlay();
}

void AInteractiveBox::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// 인터페이스 메서드 구현. 상호작용시 상호작용의 대상에서 작동하기 원하는 기능.
void AInteractiveBox::Interact_Implementation(AActor* Interactor)
{
    // 상호작용 시 상태 전환
    bIsActive = !bIsActive;

    // 상태에 따라 색상 변경 (시각적 피드백 예시)
    if (bIsActive)
    {
        MeshComponent->SetMaterial(0, ActiveMaterial);
        UE_LOG(LogTemp, Display, TEXT("%s was activated by %s"), *GetName(), *Interactor->GetName());
    }
    else
    {
        MeshComponent->SetMaterial(0, InactiveMaterial);
        UE_LOG(LogTemp, Display, TEXT("%s was deactivated by %s"), *GetName(), *Interactor->GetName());
    }
}