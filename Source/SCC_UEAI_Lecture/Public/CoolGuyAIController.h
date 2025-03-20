#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/PawnSensingComponent.h"
#include "CoolGuyAIController.generated.h"

UENUM(BlueprintType)
enum class ESearchStateInternal : uint8
{
    Idle = 0,
    Suspicious = 1,
    Chasing = 2
};


UCLASS()
class SCC_UEAI_LECTURE_API ACoolGuyAIController : public AAIController
{
    GENERATED_BODY()

public:
    // Patrol Points�� ������ ���� ���� ���� �ڵ尡 ���������� ����� �� �ֵ��� bool flag Ȱ��.
    bool bPatrolPointsReady = false;

    ACoolGuyAIController();

    //// �Ʒ��ڵ� �߰�/����
    UPROPERTY(BlueprintReadWrite, Category = "AI")
    UBehaviorTreeComponent* BehaviorTreeComponent;

    UPROPERTY(BlueprintReadWrite, Category = "AI")
    UBlackboardComponent* BlackboardComponent;

    UPROPERTY(EditAnywhere, Category = "AI")
    UBehaviorTree* BehaviorTree;

    TArray<FVector> PatrolPoints;

    // AI �ν� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAIPerceptionComponent* CoolGuyPerceptionComponent;

    // �þ߼���
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAISenseConfig_Sight* SightConfig;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Sensing")
    UPawnSensingComponent* PawnSensingComponent;

    // �ν� ������Ʈ �ݹ�
    UFUNCTION()
    void StartChasingPlayer(AActor* PlayerActor);

    // �÷��̾� ���� �����Լ�
    UFUNCTION()
    void StopChasingPlayer();

    // ������ ��ġ ���� �Լ�
    UFUNCTION()
    void StartSearchingLastLocation();


protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void OnPossess(APawn* InPawn) override;
    // virtual void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors) override;


    // �ڵ鷯
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    /* 챕터 3 과제를 위해 주석처리
    UFUNCTION()
    void OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume);
    */
    // UFUNCTION()
    // void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    // void ProcessNoiseStimulus(const FAIStimulus& Stimulus, AActor* NoiseSource);

    // ��ƿ��Ƽ �Լ�

    // 챕터 3 Status 타이머

    float StatusResetTimer;

    void ReportNoiseEvent(FVector NoiseLocation, float Loudness = 1.0f, float MaxRange = 2000.0f);



private:
    // ���� ���� ����
    FVector CurrentTargetLocation;

    // �Լ����� ������ ����� ���� �ʱ�ȭ �Լ�
    void InitializePatrolPoints();
    
    // ������� ����
    UBlackboardComponent* BB = nullptr;

    // ������� Ű �̸� ���
    static const FName PatrolLocationKey;
    static const FName TargetPlayerKey;
    static const FName CanSeePlayerKey;
    static const FName LastSeenLocationKey;
    static const FName SearchStateKey;
    static const FName LastHeardLocationKey;
    static const FName CanHearPlayerKey;
    static const FName DetectedCountsKey;
};