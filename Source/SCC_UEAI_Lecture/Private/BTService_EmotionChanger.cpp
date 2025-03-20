#include "BTService_EmotionChanger.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"

UBTService_EmotionChanger::UBTService_EmotionChanger()
{
    NodeName = TEXT("Emotion Changer");
    // 기본 서비스 간격 설정 (5초마다 실행)
    Interval = 5.0f;
}

void UBTService_EmotionChanger::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    // 확률에 따라 감정 변경 여부 결정
    float RandValue = FMath::FRand(); // 0.0~1.0 사이의 랜덤 값

    if (RandValue <= EmotionChangeChance)
    {
        UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
        if (BlackboardComp)
        {
            // 랜덤 감정 상태 가져오기
            EEmotionalState NewState = GetRandomEmotionalState();

            // 현재 감정과 다를 경우에만 변경
            uint8 CurrentEmotion = BlackboardComp->GetValueAsEnum(EmotionalStateKey);
            if (static_cast<EEmotionalState>(CurrentEmotion) != NewState)
            {
                // 블랙보드에 새 감정 상태 설정
                BlackboardComp->SetValueAsEnum(EmotionalStateKey, static_cast<uint8>(NewState));

                // 감정 변화에 따른 이동 속도 조정 등의 로직
                AAIController* AIController = OwnerComp.GetAIOwner();
                if (AIController)
                {
                    ACharacter* AICharacter = Cast<ACharacter>(AIController->GetPawn());
                    if (AICharacter)
                    {
                        // 0~2.0f 사이값이 가감률로 채택되도록 디자인
                        SpeedModifier = 0.8f + (static_cast<uint8>(NewState) * 0.2f);

                        UCharacterMovementComponent* MovementComp = AICharacter->GetCharacterMovement();

                        float BaseSpeed = AICharacter->GetClass()->GetDefaultObject<ACharacter>()->GetCharacterMovement()->MaxWalkSpeed;
                        // 캐릭터의 BaseSpeed에 가감률을 곱한 값을 캐릭터(AIPawn)에 세팅
                        MovementComp->MaxWalkSpeed = BaseSpeed * SpeedModifier;

                        // 디버그용 코드
                        UE_LOG(LogTemp, Display, TEXT("SpeedModifier Value is : %f"), SpeedModifier);
                        UE_LOG(LogTemp, Display, TEXT("AI emotion changed to: %s"), *UEnum::GetValueAsString(NewState));
                    }
                }
            }
        }
    }
}

// 랜덤감정선택 함수
EEmotionalState UBTService_EmotionChanger::GetRandomEmotionalState()
{
    // 모든 감정 상태의 개수
    int32 NumEmotions = static_cast<int32>(EEmotionalState::Angry) + 1;

    // 0부터 (감정 개수-1) 사이의 랜덤 값 생성
    int32 RandomIndex = FMath::RandRange(0, NumEmotions - 1);

    // 해당 인덱스의 감정 상태 반환
    return static_cast<EEmotionalState>(RandomIndex);
}