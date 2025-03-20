#include "BTTask_InteractWithObject.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

UBTTask_InteractWithObject::UBTTask_InteractWithObject()
{
    NodeName = TEXT("Interact With Object");
}

EBTNodeResult::Type UBTTask_InteractWithObject::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // AI ��Ʈ�ѷ��� ĳ���� ��������
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController) return EBTNodeResult::Failed;

    APawn* AIPawn = AIController->GetPawn();
    if (!AIPawn) return EBTNodeResult::Failed;

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    if (!BlackboardComp) return EBTNodeResult::Failed;

    // ��ȣ�ۿ��� ������Ʈ ��������
    UObject* TargetObject = BlackboardComp->GetValueAsObject(GetSelectedBlackboardKey());
    AActor* TargetActor = Cast<AActor>(TargetObject);

    if (!TargetActor)
    {
        return EBTNodeResult::Failed;
    }

    // ��ȣ�ۿ� �Ÿ� Ȯ��
    float Distance = FVector::Dist(AIPawn->GetActorLocation(), TargetActor->GetActorLocation());
    if (Distance > InteractionDistance)
    {
        return EBTNodeResult::Failed; // �ʹ� �ָ� ����
    }

    // �������̽� ���� Ȯ��
    if (TargetActor->GetClass()->ImplementsInterface(UInteractiveObject::StaticClass()))
    {
        // Ÿ�� ������ �����忡 ���� (��Ƽ���̿��� ������ �� �ֵ���)
        BlackboardComp->SetValueAsObject("ClosestObject", TargetActor);

        // AI ĳ���� ��������
        ACharacter* AICharacter = Cast<ACharacter>(AIPawn);

        // �ִϸ��̼� ��Ÿ�ְ� �����Ǿ� �ְ� ĳ���Ͱ� ��ȿ�� ���
        if (AICharacter && InteractionMontage)
        {
            // ��Ÿ�� ���
            // float MontageLength = AICharacter->PlayAnimMontage(InteractionMontage, InteractionDuration);
            
            // ��Ÿ�� ��� (��ȣ�ۿ��� ��Ƽ���̿��� ó��)
            AICharacter->PlayAnimMontage(InteractionMontage, 1.0f);

            // �½�ũ ���� ��ȯ
            return EBTNodeResult::Succeeded;
        }

        // �ִϸ��̼��� ���� ��� �ٷ� ��ȣ�ۿ� ����
        IInteractiveObject::Execute_Interact(TargetActor, AIPawn);

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}