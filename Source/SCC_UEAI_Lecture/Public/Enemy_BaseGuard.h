#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/PawnSensingComponent.h"
#include "DetectableInterface.h"
#include "Enemy_BaseGuard.generated.h"

// 미리선언
class UAIPerceptionComponent;
class UPawnSensingComponent;
class USphereComponent;
class AAIController;
class IGameRulesInterface;

// 경계 상태 열거형
UENUM(BlueprintType)
enum class EAlertLevel : uint8
{
    Normal      UMETA(DisplayName = "Normal"),      // 일반 상태
    Suspicious  UMETA(DisplayName = "Suspicious"),  // 의심 상태
    Alert       UMETA(DisplayName = "Alert"),       // 경계 상태
    Pursuit     UMETA(DisplayName = "Pursuit")      // 추격 상태
};

// 다중상속. 캐릭터 기능 뿐 아니라 GuardInterface 기능도 상속받게됨. AI 경비 시스템이 GuardInterface구현, 플레이어가 Detectable 구현(잡히는지), GameMode가 GameRulesInterface 구현.
UCLASS()
class SCC_UEAI_LECTURE_API AEnemy_BaseGuard : public ACharacter, public IGuardInterface 
{
    GENERATED_BODY()

public:
    // 생성자
    AEnemy_BaseGuard();

    // 컴포넌트들
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAIPerceptionComponent* AIPerceptionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UPawnSensingComponent* PawnSensingComponent;

    //UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Detection")
    USphereComponent* DetectionSphere;

    // AI 속성
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float MovementSpeed = 400.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float DetectionRange = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float ViewAngle = 60.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float HearingRange = 800.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float SightRange = 1500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float PursuitSpeed = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    EAlertLevel CurrentAlertLevel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float AlertTimeout = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    float CaptureRange = 200.0f;

    // 마지막 발견 위치
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    FVector LastKnownPlayerLocation;

    // 경계 시간 관리
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    float TimeInCurrentAlertLevel;

    // 통신 범위 (다른 가드에게 정보 전달 범위)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Communication")
    float CommunicationRange = 3000.0f; // 30 m (3000 uu)

    // 타깃 플레이어
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    APawn* TargetPlayer;

    // 게임모드
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    AGameModeBase* GameMode; // 기본 게임모드 타입 사용

    // AI 계급 설정
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    FName AIClass; 


    // 인터페이스 메서드 구현
    virtual FVector GetLastKnownPlayerLocation_Implementation() const override;
    virtual uint8 GetAlertLevel_Implementation() const override;
    virtual APawn* GetTargetPlayer_Implementation() const override;
    virtual void ReceiveAlert_Implementation(const FVector& Location, uint8 AlertLevel, AActor* AlertSource) override;
    virtual void Persuaded_Implementation() override;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // AI 컨트롤러 참조
    UPROPERTY()
    AAIController* GuardController;

    // 타이머 핸들
    FTimerHandle AlertTimerHandle;

    FTimerHandle TestTimerHandle;

public:
    // 플레이어 감지 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnPlayerDetected(APawn* DetectedPawn);

    // 소리 감지 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnHearNoise(APawn* NoiseMaker, const FVector& Location, float Volume);

    // 시각 감지 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnSeePlayer(APawn* SeenPawn);

    // 경계 수준 변경 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void SetAlertLevel(EAlertLevel NewAlertLevel);

    // 플레이어 추적 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void PursuePlayer();

    // 마지막 알려진 위치 탐색 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void InvestigateLastKnownLocation();

    // 순찰 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void Patrol();

    // 플레이어 포획 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void CapturePlayer();

    // 다른 가드에게 정보 전달 함수
    UFUNCTION(BlueprintCallable, Category = "AI|Communication")
    virtual void AlertOtherGuards(const FVector& LocationToInvestigate);

    // 인지 이벤트 핸들러
    UFUNCTION()
    virtual void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);



private:
    // 타이머 관련 함수들
    void ResetAlertTimer();
    void HandleAlertTimeout();
    void Test();
};