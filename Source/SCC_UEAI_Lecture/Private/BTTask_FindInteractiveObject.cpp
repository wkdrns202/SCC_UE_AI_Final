#include "BTTask_FindInteractiveObject.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

UBTTask_FindInteractiveObject::UBTTask_FindInteractiveObject()
{
    NodeName = TEXT("Find Interactive Object");
}

EBTNodeResult::Type UBTTask_FindInteractiveObject::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // AI ��Ʈ�ѷ��� ĳ���� ��������
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController) return EBTNodeResult::Failed;

    APawn* AIPawn = AIController->GetPawn();
    if (!AIPawn) return EBTNodeResult::Failed;

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    if (!BlackboardComp) return EBTNodeResult::Failed;

    // ������ �±׷� ��� ���� ã��
    TArray<AActor*> InteractiveObjects;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), InteractiveObjectTag, InteractiveObjects);

    // ���� ����� ������Ʈ ã��
    AActor* ClosestObject = nullptr;
    float ClosestDistance = SearchRadius;
    FVector AILocation = AIPawn->GetActorLocation();

    for (AActor* Object : InteractiveObjects)
    {   // �ش� AI Controller�� ������ Actor�� Location��, Interactive�� �±׷� ������ �ִ� Objects���� �Ÿ��� ����
        float Distance = FVector::Dist(AILocation, Object->GetActorLocation());
        if (Distance < ClosestDistance)
        {
            // ���� ����� ������Ʈ�� ������ �Ҵ��ϱ� ����.
            ClosestDistance = Distance;
            ClosestObject = Object;
        }
    }

    // ����� �����忡 ����
    if (ClosestObject)
    {
        // �����Ϳ��� ������ Key�� CloasetObject ���� �Է�
        BlackboardComp->SetValueAsObject(GetSelectedBlackboardKey(), ClosestObject);
        BlackboardComp->SetValueAsVector("ClosestObjectLocation", ClosestObject->GetActorLocation());
        UE_LOG(LogTemp, Warning, TEXT("The Closest Location is %s"), *ClosestObject->GetActorLocation().ToString());

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}