#include "AnimNotify_Interaction.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
// �������̽� ��� ����
#include "BTTask_InteractWithObject.h"

void UAnimNotify_Interaction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    // �⺻ ��Ƽ���� �Լ� ȣ��
    Super::Notify(MeshComp, Animation);

    // ������ ĳ���� ��������
    ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());
    if (!Character)
        return;

    // AI ��Ʈ�ѷ� ��������
    AAIController* AIController = Cast<AAIController>(Character->GetController());
    if (!AIController)
        return;

    // ������ ������Ʈ ��������
    UBlackboardComponent* Blackboard = AIController->GetBlackboardComponent();
    if (!Blackboard)
        return;

    // ��ȣ�ۿ� ��� ��������
    UObject* TargetObject = Blackboard->GetValueAsObject("ClosestObject");
    AActor* TargetActor = Cast<AActor>(TargetObject);
    if (!TargetActor)
        return;

    // �������̽� Ȯ�� �� ��ȣ�ۿ� ����
    if (TargetActor->GetClass()->ImplementsInterface(UInteractiveObject::StaticClass()))
    {
        IInteractiveObject::Execute_Interact(TargetActor, Character);
        UE_LOG(LogTemp, Display, TEXT("Interaction executed from Animation Notify!"));
    }
}