// 챕터 2 과제 1 소스코드 header

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "MyFriendCharacter.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AMyFriendCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyFriendCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void StartMoving();

	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void MoveToTarget();

	UFUNCTION(BlueprintCallable, Category = "Player Capture")
	void FindTargetPoints();

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
	FName PatrolLocationTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	TArray<AActor*> FoundTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	int32 PatrolCount;

private:
	UPROPERTY()
	AAIController* AIController;

	UPROPERTY()
	bool bIsMoving;


};
