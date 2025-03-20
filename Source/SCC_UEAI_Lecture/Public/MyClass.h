// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "MyClass.generated.h"

// �˻� ���� ������, UCLASS()�� �ܺο� �ۼ��ؾ���.
UENUM(BlueprintType)
enum class ESearchStateInternal_Test : uint8
{
    Idle = 0,
    Investigating = 1,
    Chasing = 2,
    Searching = 3
};
