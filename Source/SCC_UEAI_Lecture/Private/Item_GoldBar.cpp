#include "Item_GoldBar.h"
#include "Item_Coin.h"

AItem_GoldBar::AItem_GoldBar()
{
	// ������ ItemType ����
	ItemType = 1;
}

void AItem_GoldBar::BeginPlay()
{
	Super::BeginPlay();
}

bool AItem_GoldBar::IsAllCoinCollected() const
{
	UE_LOG(LogTemp, Warning, TEXT("#2 Collect Trigger Event Enabled"));
	TArray<AActor*> FoundCoins;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItem_Coin::StaticClass(), FoundCoins);

	// FoundCoins �迭�� ����ִ��� Ȯ��
	if (FoundCoins.Num() == 0)
	{
		
		UE_LOG(LogTemp, Warning, TEXT("Good Job. There is a no coin"));
		return true;
	}
	UE_LOG(LogTemp, Warning, TEXT("Still reamaining Coins: %d"), FoundCoins.Num());
	return false;
}

void AItem_GoldBar::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (IsAllCoinCollected())
	{
		Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		UE_LOG(LogTemp, Warning, TEXT("Goldbar collected"));
		// ���� ���� �� ���� ����� / �浹Ư�� ����
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not All Coins are collected!"));
	}
}
