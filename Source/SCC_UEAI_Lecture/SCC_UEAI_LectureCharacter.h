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

// ��ų Ȱ��ȭ ���¸� �����ϱ� ���� ����ü chapter 4
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
class ASCC_UEAILectureCharacter : public ACharacter, public IDetectableInterface // Player Character�� DetectableInterface ����.
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

	// �������̽� �޼��� ������
	virtual bool CanBeDetected_Implementation() const override;
	virtual bool CanMakeNoise_Implementation() const override;
	virtual void CapturedByAI_Implementation() override;

	// ���ڽ� ��� �÷���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bIsInStealthMode;

	// ���� �߻� ���� �÷���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bCanMakeNoise;

	// ���� �������� �÷���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stealth")
	bool bIsSucceededPersuasion;

	// �׺���̼� �޽� �ݰ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Navigation)
	float NavGenerationRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Navigation)
	float NavRemovalRadius;

	// AI Modifier �׽�Ʈ ���� ���� �� �Լ�
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

	// BP���� ȣ�� ������ �Լ� - �̵� ����
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void StartMoving();

	// Ÿ�� ����Ʈ ã��
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void FindTargetPoints();

	virtual void Jump() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Noise")
	class UPawnNoiseEmitterComponent* NoiseEmitterComponent;

	// ���� ���� �Ĺݺ� �߰��ڵ�
	// �÷��̾� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Lives;

	// ���Ӹ��
	UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
	AGameModeBase* GameMode; // �⺻ ���Ӹ�� Ÿ�� ���

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

	// é�� 4 �Լ� ��

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SilentMovementAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* StealthAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PersuadeAction;

	virtual void Tick(float DeltaTime) override;


public:
	// ���� �ý���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float MaxMana = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float CurrentMana = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float ManaRegenRate = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float ManaRegenInterval = 1.0f;

	// ��ų ���� ����
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

	// ��ų ��� �Լ�
	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void ActivateSilentMovement();

	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void ActivateStealth();

	UFUNCTION(BlueprintCallable, Category = "Player Skills")
	void TryPersuade();

	// AI ���ͷ��� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	bool bIsCaptured = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Interaction")
	bool bIsInvulnerable = false;
	
	//Ÿ�̸� ���ð���
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

	// AI�� ���� ������ �� ȣ��Ǵ� �Լ�
	UFUNCTION(BlueprintCallable, Category = "AI Interaction")
	void PlayerCaptured(); // CapturedByAI���� �̸� ����. �������̽� �Լ��� ���� �����.

	// 챕터3 과제
	// 탐지 중지 함수
	UFUNCTION(BlueprintCallable, Category = "AI")
	void StopAIDetection();

private:
	// ���� ��� Ÿ�̸�
	FTimerHandle ManaRegenTimerHandle;

	// ��ų ���ӽð� Ÿ�̸�
	FTimerHandle SilentMovementTimerHandle;
	FTimerHandle StealthTimerHandle;
	FTimerHandle InvulnerabilityTimerHandle;

	// ������� 10�� ���� Ÿ�̸�
	FTimerHandle CapturedTimerHandle;

	// ������� 5�� �����ȸ �ο� Ÿ�̸�
	FTimerHandle PlayerCapturedTimerHandle;

	// ���� ��� �Լ�
	void RegenerateMana();

	// ��ų ���� �Լ�
	void EndSilentMovement();
	void EndStealth();
	void EndInvulnerability();

	// �⺻ ĳ���� �̵� ���� ũ��
	UPROPERTY(EditAnywhere, Category = "Noise", meta = (AllowPrivateAccess = "true"))
	float DefaultMovementNoiseLoudness = 1.0f;

	// ���� �޽� ��Ƽ���� �����
	TArray<UMaterialInterface*> OriginalMaterials;

	// ���ڽ��� ��Ƽ����
	UPROPERTY(EditAnywhere, Category = "Player Skills", meta = (AllowPrivateAccess = "true"))
	UMaterialInterface* StealthMaterial;
};