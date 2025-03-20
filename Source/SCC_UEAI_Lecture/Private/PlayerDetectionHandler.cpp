#include "PlayerDetectionHandler.h"

APlayerDetectionHandler::APlayerDetectionHandler()
{
    PrimaryActorTick.bCanEverTick = false;
}

void APlayerDetectionHandler::BeginPlay()
{
    Super::BeginPlay();
}

void APlayerDetectionHandler::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}