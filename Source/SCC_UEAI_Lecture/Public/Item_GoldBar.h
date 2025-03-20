#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Item_GoldBar.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API AItem_GoldBar : public ABaseItem
{
	GENERATED_BODY()
	

public:
	AItem_GoldBar();

    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult);

private:
	virtual void BeginPlay() override;

	bool IsAllCoinCollected() const;

};
