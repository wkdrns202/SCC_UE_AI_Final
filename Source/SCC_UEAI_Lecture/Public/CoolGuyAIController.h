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
    Investigating = 1,
    Chasing = 2,
    Searching = 3
};


UCLASS()
class SCC_UEAI_LECTURE_API ACoolGuyAIController : public AAIController
{
    GENERATED_BODY()

public:
    // Patrol Points가 수집된 이후 다음 연관 코드가 순차적으로 실행될 수 있도록 bool flag 활용.
    bool bPatrolPointsReady = false;

    ACoolGuyAIController();

    //// 아래코드 추가/수정
    UPROPERTY(BlueprintReadWrite, Category = "AI")
    UBehaviorTreeComponent* BehaviorTreeComponent;

    UPROPERTY(BlueprintReadWrite, Category = "AI")
    UBlackboardComponent* BlackboardComponent;

    UPROPERTY(EditAnywhere, Category = "AI")
    UBehaviorTree* BehaviorTree;

    TArray<FVector> PatrolPoints;

    // AI 인식 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAIPerceptionComponent* CoolGuyPerceptionComponent;

    // 시야설정
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAISenseConfig_Sight* SightConfig;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Sensing")
    UPawnSensingComponent* PawnSensingComponent;

    // 인식 업데이트 콜백
    UFUNCTION()
    void StartChasingPlayer(AActor* PlayerActor);

    // 플레이어 추적 중지함수
    UFUNCTION()
    void StopChasingPlayer();

    // 마지막 위치 수색 함수
    UFUNCTION()
    void StartSearchingLastLocation();


protected:
    virtual void BeginPlay() override;
    virtual void OnPossess(APawn* InPawn) override;
    // virtual void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors) override;


    // 핸들러
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    UFUNCTION()
    void OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume);

    // UFUNCTION()
    // void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    // void ProcessNoiseStimulus(const FAIStimulus& Stimulus, AActor* NoiseSource);

    // 유틸리티 함수
    void ReportNoiseEvent(FVector NoiseLocation, float Loudness = 1.0f, float MaxRange = 2000.0f);
    void TestHearing();



private:
    // 순찰 지점 저장
    FVector CurrentTargetLocation;

    // 함수실행 순서를 고려한 지연 초기화 함수
    void InitializePatrolPoints();
    
    // 블랙보드 참조
    UBlackboardComponent* BB = nullptr;

    // 블랙보드 키 이름 상수
    static const FName PatrolLocationKey;
    static const FName TargetPlayerKey;
    static const FName CanSeePlayerKey;
    static const FName LastSeenLocationKey;
    static const FName SearchStateKey;
    static const FName LastHeardLocationKey;
    static const FName CanHearPlayerKey;
};