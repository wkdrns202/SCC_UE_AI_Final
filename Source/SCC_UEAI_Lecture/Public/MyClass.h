// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "MyClass.generated.h"

// 검색 상태 열거형, UCLASS()의 외부에 작성해야함.
UENUM(BlueprintType)
enum class ESearchStateInternal_Test : uint8
{
    Idle = 0,
    Investigating = 1,
    Chasing = 2,
    Searching = 3
};
