#include "AnimNotify_Interaction.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
// 인터페이스 헤더 포함
#include "BTTask_InteractWithObject.h"

void UAnimNotify_Interaction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    // 기본 노티파이 함수 호출
    Super::Notify(MeshComp, Animation);

    // 소유자 캐릭터 가져오기
    ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());
    if (!Character)
        return;

    // AI 컨트롤러 가져오기
    AAIController* AIController = Cast<AAIController>(Character->GetController());
    if (!AIController)
        return;

    // 블랙보드 컴포넌트 가져오기
    UBlackboardComponent* Blackboard = AIController->GetBlackboardComponent();
    if (!Blackboard)
        return;

    // 상호작용 대상 가져오기
    UObject* TargetObject = Blackboard->GetValueAsObject("ClosestObject");
    AActor* TargetActor = Cast<AActor>(TargetObject);
    if (!TargetActor)
        return;

    // 인터페이스 확인 및 상호작용 실행
    if (TargetActor->GetClass()->ImplementsInterface(UInteractiveObject::StaticClass()))
    {
        IInteractiveObject::Execute_Interact(TargetActor, Character);
        UE_LOG(LogTemp, Display, TEXT("Interaction executed from Animation Notify!"));
    }
}