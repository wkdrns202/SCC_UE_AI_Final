#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "NavigationInvokerComponent.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "Components/PawnNoiseEmitterComponent.h"
#include "DetectableInterface.h"
#include "Blueprint/UserWidget.h"
#include "SCC_UEAI_LectureCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

// 스킬 활성화 상태를 추적하기 위한 구조체 chapter 4
USTRUCT(BlueprintType)
struct FSkillState
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	bool bIsActive = false;

	UPROPERTY(BlueprintReadOnly)
	float Duration = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	float RemainingTime = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	float ManaCost = 0.0f;
};


UCLASS(config = Game)
class ASCC_UEAILectureCharacter : public ACharacter, public IDetectableInterface // Player Character는 DetectableInterface 구현.
{
	GENERATED_BODY()
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	/** Navigation Invoker component */
	UPROPERTY(BlueprintReadWrite, Category = Navigation, meta = (AllowPrivateAccess = "true"))
	UNavigationInvokerComponent* NavInvoker;
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	ASCC_UEAILectureCharacter();

	// 인터페이스 메서드 구현부
	virtual bool CanBeDetected_Implementation() const override;
	virtual bool CanMakeNoise_Implementation() const override;
	virtual void CapturedByAI_Implementation() override;

	// 스텔스 모드 플래그
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bIsInStealthMode;

	// 소음 발생 가능 플래그
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bCanMakeNoise;

	// 설득 성공여부 플래그
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bIsSucceededPersuasion;

	// 네비게이션 메시 반경 설정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Navigation)
	float NavGenerationRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Navigation)
	float NavRemovalRadius;

	// AI Modifier 테스트 관련 변수 및 함수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	bool bIsSucceeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	AActor* Target2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	float AcceptanceRadius = 50.0f;

	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void MoveToTarget();

	UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

	// BP에서 호출 가능한 함수 - 이동 시작
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void StartMoving();

	// 타겟 포인트 찾기
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void FindTargetPoints();

	virtual void Jump() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Noise")
	class UPawnNoiseEmitterComponent* NoiseEmitterComponent;

	// 게임 제작 후반부 추가코드
	// 플레이어 생명
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Lives;

	// 게임모드
	UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
	AGameModeBase* GameMode; // 기본 게임모드 타입 사용

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);
	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	virtual void BeginPlay() override;
	virtual void NotifyControllerChanged() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY()
	AAIController* AIController;

	UPROPERTY()
	bool bIsMoving;

	void MakeNoise(float Loudness, FVector NoiseLocation);

	void GameOver();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	/** Returns NavInvoker subobject **/
	FORCEINLINE class UNavigationInvokerComponent* GetNavInvoker() const { return NavInvoker; }

	// 챕터 4 함수 등

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SilentMovementAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* StealthAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PersuadeAction;

	virtual void Tick(float DeltaTime) override;


public:
	// 마나 시스템
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float MaxMana = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float CurrentMana = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float ManaRegenRate = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float ManaRegenInterval = 1.0f;

	// 스킬 상태 관리
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Skills")
	FSkillState SilentMovementSkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Skills")
	FSkillState StealthSkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Skills")
	FSkillState InvulnerabilitySkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Skills")
	float DefaultWalkSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Skills")
	float SlowWalkSpeed = 250.0f;

	// 스킬 사용 함수
	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void ActivateSilentMovement();

	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void ActivateStealth();

	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void TryPersuade();

	// AI 인터랙션 관련
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	bool bIsCaptured = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	bool bIsInvulnerable = false;
	
	//타이머 세팅관련
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	bool bIsTimerSet = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	float InvulnerabilityDuration = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	float PersuasionChance = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	float PersuasionWindow = 5.0f;

	UPROPERTY(EditAnywhere, Category = "AI Interaction")
	float CaptureTime = 0.0f;

	// AI에 의해 잡혔을 때 호출되는 함수
	UFUNCTION(BlueprintCallable, Category = "AI Interaction")
	void PlayerCaptured(); // CapturedByAI에서 이름 변경. 인터페이스 함수에 의해 실행됨.

private:
	// 마나 재생 타이머
	FTimerHandle ManaRegenTimerHandle;

	// 스킬 지속시간 타이머
	FTimerHandle SilentMovementTimerHandle;
	FTimerHandle StealthTimerHandle;
	FTimerHandle InvulnerabilityTimerHandle;

	// 잡힐경우 10초 무적 타이머
	FTimerHandle CapturedTimerHandle;

	// 잡힐경우 5초 설득기회 부여 타이머
	FTimerHandle PlayerCapturedTimerHandle;

	// 마나 재생 함수
	void RegenerateMana();

	// 스킬 종료 함수
	void EndSilentMovement();
	void EndStealth();
	void EndInvulnerability();

	// 기본 캐릭터 이동 소음 크기
	UPROPERTY(EditAnywhere, Category = "Noise", meta = (AllowPrivateAccess = "true"))
	float DefaultMovementNoiseLoudness = 1.0f;

	// 기존 메시 머티리얼 저장용
	TArray<UMaterialInterface*> OriginalMaterials;

	// 스텔스용 머티리얼
	UPROPERTY(EditAnywhere, Category = "Player Skills", meta = (AllowPrivateAccess = "true"))
	UMaterialInterface* StealthMaterial;
};