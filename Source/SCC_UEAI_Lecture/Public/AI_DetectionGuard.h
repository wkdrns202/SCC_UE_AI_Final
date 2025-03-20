#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/AIPerceptionTypes.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AI_DetectionGuard.generated.h"

// 경계 수준 정의
UENUM(BlueprintType)
enum class EGuardAlertLevel : uint8
{
    Idle        UMETA(DisplayName = "Idle"),
    Suspicious  UMETA(DisplayName = "Suspicious"),
    Chasing     UMETA(DisplayName = "Chasing")
};

UCLASS()
class SCC_UEAI_LECTURE_API AAI_DetectionGuard : public ACharacter
{
    GENERATED_BODY()

public:
    AAI_DetectionGuard();

    // 비헤이비어 트리 애셋
    UPROPERTY(EditDefaultsOnly, Category = "AI|Behavior")
    UBehaviorTree* BehaviorTree;

    // 경계 수준에 따른 행동 변화
    UPROPERTY(BlueprintReadWrite, Category = "AI|Alert")
    EGuardAlertLevel GuardAlertLevel;

    // 감지 횟수 카운터
    UPROPERTY(BlueprintReadWrite, Category = "AI|Detection")
    int32 DetectionCount;

    // 경계 수준 설정 최대 값
    UPROPERTY(EditDefaultsOnly, Category = "AI|Detection")
    int32 MaxDetectionCount;

    // 경계 수준 감소 타이머
    UPROPERTY(EditDefaultsOnly, Category = "AI|Detection")
    float DetectionDecayTime;

    // AI 기본 속성
    UPROPERTY(EditDefaultsOnly, Category = "AI|Movement")
    float IdleSpeed;

    UPROPERTY(EditDefaultsOnly, Category = "AI|Movement")
    float SuspiciousSpeed;

    UPROPERTY(EditDefaultsOnly, Category = "AI|Movement")
    float ChasingSpeed;

    // 시야 감지 범위
    UPROPERTY(EditDefaultsOnly, Category = "AI|Perception")
    float SightRadius;

    UPROPERTY(EditDefaultsOnly, Category = "AI|Perception")
    float LoseSightRadius;

    UPROPERTY(EditDefaultsOnly, Category = "AI|Perception")
    float PeripheralVisionAngle;

    // AI 컴포넌트
    UPROPERTY(VisibleAnywhere, Category = "AI|Components")
    class UAIPerceptionComponent* PerceptionComponent;

    UPROPERTY(VisibleAnywhere, Category = "AI|Components")
    class UPawnSensingComponent* PawnSensingComponent;

    // 플레이어 관련 데이터
    UPROPERTY(BlueprintReadOnly, Category = "AI|Target")
    APawn* TargetPlayer;

    UPROPERTY(BlueprintReadOnly, Category = "AI|Target")
    FVector LastKnownPlayerLocation;

    // 추적 중단 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    void StopChasing();

    // 경계 수준 업데이트
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    void UpdateAlertLevel();

    // 플레이어 감지 카운트 증가
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    void IncrementDetectionCount();

    // 플레이어 감지 카운트 감소
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    void DecrementDetectionCount();

    // 블랙보드 값 업데이트
    UFUNCTION(BlueprintCallable, Category = "AI|Blackboard")
    void UpdateBlackboard();

    // 시야 감지 함수
    UFUNCTION()
    void OnSeePlayer(APawn* SeenPawn);

    // 소리 감지 함수
    UFUNCTION()
    void OnHearNoise(APawn* NoiseMaker, const FVector& Location, float Volume);

    // AI 지각 업데이트 함수
    UFUNCTION()
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    // 속도 설정 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Movement")
    void SetSpeedByAlertLevel();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // AI 컨트롤러
    UPROPERTY()
    class AAIController* AIController;

private:
    // 감지 횟수 감소 타이머
    FTimerHandle DetectionDecayTimerHandle;

    // 감지 카운트 감소 함수
    void HandleDetectionDecay();

    // 지각 시스템 설정
    void SetupPerceptionSystem();
};