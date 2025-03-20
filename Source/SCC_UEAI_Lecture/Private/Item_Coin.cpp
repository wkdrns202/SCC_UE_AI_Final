#include "Item_Coin.h"

AItem_Coin::AItem_Coin()
{
    SecondFloor = 400.0f;
}

void AItem_Coin::BeginPlay()
{
    Super::BeginPlay();

    // ���� ������ ��ġ ��������
    FVector CurrentLocation = GetActorLocation();

    // Z���� SecondFloor���� ū�� üũ
    if (CurrentLocation.Z >= SecondFloor)
    {
        bIsOn2F = true;
    }
    else
    {
        bIsOn2F = false;
    }
}
