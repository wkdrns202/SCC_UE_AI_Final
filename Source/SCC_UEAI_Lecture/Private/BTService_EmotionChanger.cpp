#include "BTService_EmotionChanger.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"

UBTService_EmotionChanger::UBTService_EmotionChanger()
{
    NodeName = TEXT("Emotion Changer");
    // �⺻ ���� ���� ���� (5�ʸ��� ����)
    Interval = 5.0f;
}

void UBTService_EmotionChanger::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    // Ȯ���� ���� ���� ���� ���� ����
    float RandValue = FMath::FRand(); // 0.0~1.0 ������ ���� ��

    if (RandValue <= EmotionChangeChance)
    {
        UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
        if (BlackboardComp)
        {
            // ���� ���� ���� ��������
            EEmotionalState NewState = GetRandomEmotionalState();

            // ���� ������ �ٸ� ��쿡�� ����
            uint8 CurrentEmotion = BlackboardComp->GetValueAsEnum(EmotionalStateKey);
            if (static_cast<EEmotionalState>(CurrentEmotion) != NewState)
            {
                // �����忡 �� ���� ���� ����
                BlackboardComp->SetValueAsEnum(EmotionalStateKey, static_cast<uint8>(NewState));

                // ���� ��ȭ�� ���� �̵� �ӵ� ���� ���� ����
                AAIController* AIController = OwnerComp.GetAIOwner();
                if (AIController)
                {
                    ACharacter* AICharacter = Cast<ACharacter>(AIController->GetPawn());
                    if (AICharacter)
                    {
                        // 0~2.0f ���̰��� �������� ä�õǵ��� ������
                        SpeedModifier = 0.8f + (static_cast<uint8>(NewState) * 0.2f);

                        UCharacterMovementComponent* MovementComp = AICharacter->GetCharacterMovement();

                        float BaseSpeed = AICharacter->GetClass()->GetDefaultObject<ACharacter>()->GetCharacterMovement()->MaxWalkSpeed;
                        // ĳ������ BaseSpeed�� �������� ���� ���� ĳ����(AIPawn)�� ����
                        MovementComp->MaxWalkSpeed = BaseSpeed * SpeedModifier;

                        // ����׿� �ڵ�
                        UE_LOG(LogTemp, Display, TEXT("SpeedModifier Value is : %f"), SpeedModifier);
                        UE_LOG(LogTemp, Display, TEXT("AI emotion changed to: %s"), *UEnum::GetValueAsString(NewState));
                    }
                }
            }
        }
    }
}

// ������������ �Լ�
EEmotionalState UBTService_EmotionChanger::GetRandomEmotionalState()
{
    // ��� ���� ������ ����
    int32 NumEmotions = static_cast<int32>(EEmotionalState::Angry) + 1;

    // 0���� (���� ����-1) ������ ���� �� ����
    int32 RandomIndex = FMath::RandRange(0, NumEmotions - 1);

    // �ش� �ε����� ���� ���� ��ȯ
    return static_cast<EEmotionalState>(RandomIndex);
}