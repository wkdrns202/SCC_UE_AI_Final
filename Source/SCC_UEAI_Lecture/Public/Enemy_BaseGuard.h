#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/PawnSensingComponent.h"
#include "DetectableInterface.h"
#include "Enemy_BaseGuard.generated.h"

// �̸�����
class UAIPerceptionComponent;
class UPawnSensingComponent;
class USphereComponent;
class AAIController;
class IGameRulesInterface;

// ��� ���� ������
UENUM(BlueprintType)
enum class EAlertLevel : uint8
{
    Normal      UMETA(DisplayName = "Normal"),      // �Ϲ� ����
    Suspicious  UMETA(DisplayName = "Suspicious"),  // �ǽ� ����
    Alert       UMETA(DisplayName = "Alert"),       // ��� ����
    Pursuit     UMETA(DisplayName = "Pursuit")      // �߰� ����
};

// ���߻��. ĳ���� ��� �� �ƴ϶� GuardInterface ��ɵ� ��ӹްԵ�. AI ��� �ý����� GuardInterface����, �÷��̾ Detectable ����(��������), GameMode�� GameRulesInterface ����.
UCLASS()
class SCC_UEAI_LECTURE_API AEnemy_BaseGuard : public ACharacter, public IGuardInterface 
{
    GENERATED_BODY()

public:
    // ������
    AEnemy_BaseGuard();

    // ������Ʈ��
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UAIPerceptionComponent* AIPerceptionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Perception")
    UPawnSensingComponent* PawnSensingComponent;

    //UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI|Detection")
    USphereComponent* DetectionSphere;

    // AI �Ӽ�
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

    // ������ �߰� ��ġ
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    FVector LastKnownPlayerLocation;

    // ��� �ð� ����
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    float TimeInCurrentAlertLevel;

    // ��� ���� (�ٸ� ���忡�� ���� ���� ����)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Communication")
    float CommunicationRange = 3000.0f; // 30 m (3000 uu)

    // Ÿ�� �÷��̾�
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    APawn* TargetPlayer;

    // ���Ӹ��
    UPROPERTY(BlueprintReadOnly, Category = "AI|Tracking")
    AGameModeBase* GameMode; // �⺻ ���Ӹ�� Ÿ�� ���

    // AI ��� ����
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Properties")
    FName AIClass; 


    // �������̽� �޼��� ����
    virtual FVector GetLastKnownPlayerLocation_Implementation() const override;
    virtual uint8 GetAlertLevel_Implementation() const override;
    virtual APawn* GetTargetPlayer_Implementation() const override;
    virtual void ReceiveAlert_Implementation(const FVector& Location, uint8 AlertLevel, AActor* AlertSource) override;
    virtual void Persuaded_Implementation() override;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // AI ��Ʈ�ѷ� ����
    UPROPERTY()
    AAIController* GuardController;

    // Ÿ�̸� �ڵ�
    FTimerHandle AlertTimerHandle;

    FTimerHandle TestTimerHandle;

public:
    // �÷��̾� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnPlayerDetected(APawn* DetectedPawn);

    // �Ҹ� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnHearNoise(APawn* NoiseMaker, const FVector& Location, float Volume);

    // �ð� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Detection")
    virtual void OnSeePlayer(APawn* SeenPawn);

    // ��� ���� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void SetAlertLevel(EAlertLevel NewAlertLevel);

    // �÷��̾� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void PursuePlayer();

    // ������ �˷��� ��ġ Ž�� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void InvestigateLastKnownLocation();

    // ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void Patrol();

    // �÷��̾� ��ȹ �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Behavior")
    virtual void CapturePlayer();

    // �ٸ� ���忡�� ���� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI|Communication")
    virtual void AlertOtherGuards(const FVector& LocationToInvestigate);

    // ���� �̺�Ʈ �ڵ鷯
    UFUNCTION()
    virtual void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);



private:
    // Ÿ�̸� ���� �Լ���
    void ResetAlertTimer();
    void HandleAlertTimeout();
    void Test();
};