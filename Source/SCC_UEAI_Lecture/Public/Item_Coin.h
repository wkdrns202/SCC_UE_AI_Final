#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Item_Coin.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AItem_Coin : public ABaseItem
{
	GENERATED_BODY()

public:
	AItem_Coin();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
	bool bIsOn2F; // 2층에 있는 코인인지 확인.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
	float SecondFloor;
};
