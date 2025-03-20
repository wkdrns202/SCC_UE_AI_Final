#pragma once

#include "CoreMinimal.h"
#include "Enemy_BaseGuard.h"
#include "Enemy_PoliceGuard.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AEnemy_PoliceGuard : public AEnemy_BaseGuard
{
	GENERATED_BODY()
	
public:
	AEnemy_PoliceGuard();

	// AI PoliceGuard의 체력한계 부여
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Police Feature")
	float Stamina;
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Police Feature")
	float StaminaRecoveryRate;
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Police Feature")
	float StaminaDrainRate;
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Police Feature")
	float MaxStamina;
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Police Feature")
	int32 age;

private:
	bool IsResting;


protected:
	virtual void Tick(float DeltaTime) override;

};
