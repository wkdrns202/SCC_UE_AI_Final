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
    // AI 컨트롤러와 캐릭터 가져오기
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController) return EBTNodeResult::Failed;

    APawn* AIPawn = AIController->GetPawn();
    if (!AIPawn) return EBTNodeResult::Failed;

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    if (!BlackboardComp) return EBTNodeResult::Failed;

    // 상호작용할 오브젝트 가져오기
    UObject* TargetObject = BlackboardComp->GetValueAsObject(GetSelectedBlackboardKey());
    AActor* TargetActor = Cast<AActor>(TargetObject);

    if (!TargetActor)
    {
        return EBTNodeResult::Failed;
    }

    // 상호작용 거리 확인
    float Distance = FVector::Dist(AIPawn->GetActorLocation(), TargetActor->GetActorLocation());
    if (Distance > InteractionDistance)
    {
        return EBTNodeResult::Failed; // 너무 멀리 있음
    }

    // 인터페이스 지원 확인
    if (TargetActor->GetClass()->ImplementsInterface(UInteractiveObject::StaticClass()))
    {
        // 타겟 정보를 블랙보드에 저장 (노티파이에서 접근할 수 있도록)
        BlackboardComp->SetValueAsObject("ClosestObject", TargetActor);

        // AI 캐릭터 가져오기
        ACharacter* AICharacter = Cast<ACharacter>(AIPawn);

        // 애니메이션 몽타주가 설정되어 있고 캐릭터가 유효한 경우
        if (AICharacter && InteractionMontage)
        {
            // 몽타주 재생
            // float MontageLength = AICharacter->PlayAnimMontage(InteractionMontage, InteractionDuration);
            
            // 몽타주 재생 (상호작용은 노티파이에서 처리)
            AICharacter->PlayAnimMontage(InteractionMontage, 1.0f);

            // 태스크 성공 반환
            return EBTNodeResult::Succeeded;
        }

        // 애니메이션이 없는 경우 바로 상호작용 진행
        IInteractiveObject::Execute_Interact(TargetActor, AIPawn);

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}