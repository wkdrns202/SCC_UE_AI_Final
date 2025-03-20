#include "Item_Coin.h"

AItem_Coin::AItem_Coin()
{
    SecondFloor = 400.0f;
}

void AItem_Coin::BeginPlay()
{
    Super::BeginPlay();

    // 현재 액터의 위치 가져오기
    FVector CurrentLocation = GetActorLocation();

    // Z값이 SecondFloor보다 큰지 체크
    if (CurrentLocation.Z >= SecondFloor)
    {
        bIsOn2F = true;
    }
    else
    {
        bIsOn2F = false;
    }
}
