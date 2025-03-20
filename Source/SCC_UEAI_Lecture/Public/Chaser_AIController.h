#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Chaser_AIController.generated.h"

// AI ���� ������ ����
UENUM(BlueprintType)
enum class EAIState : uint8
{
    Idle,
    Suspicious,
    Chasing
};

/**
 * �Ÿ� ��� ���� ������ ������ AI ��Ʈ�ѷ�
 */
UCLASS()
class SCC_UEAI_LECTURE_API AChaser_AIController : public AAIController
{
    GENERATED_BODY()

public:
    // ������
    AChaser_AIController();

    // ������ Ÿ��(�÷��̾�)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    AActor* TargetActor;

    // ���� ����/���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI")
    void StartChasing(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "AI")
    void StopChasing();

    // �Ÿ� ����
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float DetectionRadius = 1500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float ChaseRadius = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float LoseInterestRadius = 2000.0f;


    // �þ� ���� ����
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAISenseConfig_Sight* SightConfig;

    // ���� �̺�Ʈ ó�� �Լ�
    UFUNCTION()
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    // ���� ��ȯ �Լ�
    UFUNCTION(BlueprintCallable, Category = "AI")
    void UpdateAIState();

    // ���� ���� ��ȯ
    UFUNCTION(BlueprintPure, Category = "AI")
    EAIState GetCurrentState() const { return CurrentState; }

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    // Ÿ�� ���� ������ ����
    bool bIsChasing = false;

    // ���� AI ����
    EAIState CurrentState = EAIState::Idle;

    // ���������� Ÿ���� �� ��ġ
    FVector LastKnownLocation;
};