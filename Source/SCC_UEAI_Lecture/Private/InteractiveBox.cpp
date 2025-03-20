#include "InteractiveBox.h"

AInteractiveBox::AInteractiveBox()
{
    PrimaryActorTick.bCanEverTick = true;

    // �޽� ������Ʈ ���� �� ����
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // �±� �߰�. �����Ϳ��� �߰��ص� ��.
    Tags.Add(FName("Interactive"));

    // �ʱ� ���� ����
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

// �������̽� �޼��� ����. ��ȣ�ۿ�� ��ȣ�ۿ��� ��󿡼� �۵��ϱ� ���ϴ� ���.
void AInteractiveBox::Interact_Implementation(AActor* Interactor)
{
    // ��ȣ�ۿ� �� ���� ��ȯ
    bIsActive = !bIsActive;

    // ���¿� ���� ���� ���� (�ð��� �ǵ�� ����)
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