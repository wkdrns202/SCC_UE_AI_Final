#pragma once
#include "CoreMinimal.h"
#include "EEmotionalState.generated.h"

// AI의 감정 상태를 정의하는 열거형
UENUM(BlueprintType)
enum class EEmotionalState : uint8
{
    Sad = 0 UMETA(DisplayName = "Sad"),
    Happy = 1 UMETA(DisplayName = "Happy"),
    Curious = 2 UMETA(DisplayName = "Curious"),
    Neutral = 3 UMETA(DisplayName = "Neutral"),
    Scared = 4 UMETA(DisplayName = "Scared"),
    Angry = 5 UMETA(DisplayName = "Angry")
};