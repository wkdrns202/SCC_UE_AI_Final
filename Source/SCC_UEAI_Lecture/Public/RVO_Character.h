#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RVO_Character.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API ARVO_Character : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ARVO_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Ÿ�� ��ġ�� �̵�
	UFUNCTION(BlueprintCallable, Category = "AI Movement")
	void MoveToTarget();

	// RVO ȸ�� Ȱ��ȭ/��Ȱ��ȭ
	UFUNCTION(BlueprintCallable, Category = "RVO")
	void SetRVOAvoidanceEnabled(bool bEnable);

public:
	// �̵��� Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Movement")
	AActor* TargetActor;

	// RVO ȸ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO")
	float AvoidanceRadius = 300.0f;
	// RVO ��� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO")
	float AvoidanceWeight = 0.5f;

private:
	// AI ��Ʈ�ѷ� ĳ��
	class AAIController* AIController;
};