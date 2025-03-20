#pragma once

#include "CoreMinimal.h"
#include "Enemy_BaseGuard.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Enemy_TESTGuard.generated.h"


UCLASS()
class SCC_UEAI_LECTURE_API AEnemy_TESTGuard : public AEnemy_BaseGuard
{
	GENERATED_BODY()
public:
	AEnemy_TESTGuard();

	// Ÿ�� ����Ʈ ã��
	UFUNCTION(BlueprintCallable, Category = "Player Capture")
	void FindTargetPoints();

	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void MoveToTarget();

	// BP���� ȣ�� ������ �Լ� - �̵� ����
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void StartMoving();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Capture")
	AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Capture")
	AActor* Target2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	bool bIsSucceeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	float AcceptanceRadius = 50.0f;

	UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	TArray<AActor*> FoundTargets;

	// ��Ʈ�� �����̼� �±�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	FName PatrolLocationTag;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	AAIController* AIController;

	UPROPERTY()
	bool bIsMoving;
};
