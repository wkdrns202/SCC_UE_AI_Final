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
    // AI 인지 컴포넌트 생성
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

    // 시각 감지 설정
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->SightRadius = 1000.0f;  // 시야 반경
    SightConfig->LoseSightRadius = 1200.0f;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->SetMaxAge(5.0f);
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = false;

    // 청각 감지 설정
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
    // 감지 시스템 설정
    if (AIPerceptionComponent)
    {
        // 시각 감지 추가
        AIPerceptionComponent->ConfigureSense(*SightConfig);
        AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

        // 청각 감지 추가
        AIPerceptionComponent->ConfigureSense(*HearingConfig);

        // 감지 이벤트 바인딩 (필요한 경우)
        AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemy_AIController::OnTargetPerceptionUpdated);
    }
}

// 감지될 경우 빙의한 Pawn의 OnTargetPerceptionUpdated() 호출
void AEnemy_AIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    // Enemy_BaseGuard 캐릭터 참조 가져오기
    AEnemy_BaseGuard* Guard = Cast<AEnemy_BaseGuard>(GetPawn());
    if (Guard)
    {
        Guard->OnTargetPerceptionUpdated(Actor, Stimulus);
    }
}