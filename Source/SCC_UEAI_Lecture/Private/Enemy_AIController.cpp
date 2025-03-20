#include "Enemy_AIController.h"
#include "Enemy_BaseGuard.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Kismet/GameplayStatics.h"

AEnemy_AIController::AEnemy_AIController()
{
    // AI ���� ������Ʈ ����
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

    // �ð� ���� ����
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->SightRadius = 1000.0f;  // �þ� �ݰ�
    SightConfig->LoseSightRadius = 1200.0f;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->SetMaxAge(5.0f);
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = false;

    // û�� ���� ����
    HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
    HearingConfig->HearingRange = 1500.0f;
    HearingConfig->SetMaxAge(5.0f);
    HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
    HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
    HearingConfig->DetectionByAffiliation.bDetectFriendlies = false;
}

void AEnemy_AIController::BeginPlay()
{
    Super::BeginPlay();
    SetupPerceptionSystem();
}

void AEnemy_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void AEnemy_AIController::SetupPerceptionSystem()
{
    // ���� �ý��� ����
    if (AIPerceptionComponent)
    {
        // �ð� ���� �߰�
        AIPerceptionComponent->ConfigureSense(*SightConfig);
        AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

        // û�� ���� �߰�
        AIPerceptionComponent->ConfigureSense(*HearingConfig);

        // ���� �̺�Ʈ ���ε� (�ʿ��� ���)
        AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemy_AIController::OnTargetPerceptionUpdated);
    }
}

// ������ ��� ������ Pawn�� OnTargetPerceptionUpdated() ȣ��
void AEnemy_AIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // Enemy_BaseGuard ĳ���� ���� ��������
    AEnemy_BaseGuard* Guard = Cast<AEnemy_BaseGuard>(GetPawn());
    if (Guard)
    {
        Guard->OnTargetPerceptionUpdated(Actor, Stimulus);
    }
}