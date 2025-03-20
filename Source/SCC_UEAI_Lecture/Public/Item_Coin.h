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
	bool bIsOn2F; // 2���� �ִ� �������� Ȯ��.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
	float SecondFloor;
};
