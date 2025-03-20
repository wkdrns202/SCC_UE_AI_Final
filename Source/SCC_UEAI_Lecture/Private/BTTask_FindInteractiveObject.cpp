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
    // AI 컨트롤러와 캐릭터 가져오기
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController) return EBTNodeResult::Failed;

    APawn* AIPawn = AIController->GetPawn();
    if (!AIPawn) return EBTNodeResult::Failed;

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    if (!BlackboardComp) return EBTNodeResult::Failed;

    // 지정된 태그로 모든 액터 찾기
    TArray<AActor*> InteractiveObjects;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), InteractiveObjectTag, InteractiveObjects);

    // 가장 가까운 오브젝트 찾기
    AActor* ClosestObject = nullptr;
    float ClosestDistance = SearchRadius;
    FVector AILocation = AIPawn->GetActorLocation();

    for (AActor* Object : InteractiveObjects)
    {   // 해당 AI Controller를 보유한 Actor의 Location과, Interactive를 태그로 가지고 있는 Objects와의 거리를 산출
        float Distance = FVector::Dist(AILocation, Object->GetActorLocation());
        if (Distance < ClosestDistance)
        {
            // 가장 가까운 오브젝트를 변수에 할당하기 위함.
            ClosestDistance = Distance;
            ClosestObject = Object;
        }
    }

    // 결과를 블랙보드에 저장
    if (ClosestObject)
    {
        // 에디터에서 세팅한 Key에 CloasetObject 값을 입력
        BlackboardComp->SetValueAsObject(GetSelectedBlackboardKey(), ClosestObject);
        BlackboardComp->SetValueAsVector("ClosestObjectLocation", ClosestObject->GetActorLocation());
        UE_LOG(LogTemp, Warning, TEXT("The Closest Location is %s"), *ClosestObject->GetActorLocation().ToString());

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}