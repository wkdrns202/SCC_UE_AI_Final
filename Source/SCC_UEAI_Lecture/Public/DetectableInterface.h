#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DetectableInterface.generated.h"

// �������̽� ����
UINTERFACE(MinimalAPI)
class UDetectableInterface : public UInterface
{
    GENERATED_BODY()
};

// �÷��̾�� �������̽�
class SCC_UEAI_LECTURE_API IDetectableInterface 
{
    GENERATED_BODY()

public:
    // ���� ���� ���� Ȯ�� (���ڽ� ��� �ƴ���)
    // ���������� �Ʒ��� ���� BlueprintNativeEvent�� �Լ��� ���, ���� ������ �� �������̽� ��ü�� �ƴ϶� �� �������̽��� �����ϴ� Ŭ����(PlayerCharacer)�� ����.
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    bool CanBeDetected() const;

    // ���� �߻� ���� ���� Ȯ��
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    bool CanMakeNoise() const;

    // ĸó�Ǿ��� �� ȣ��
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    void CapturedByAI();
};

// ���� �� ���� �������̽�
UINTERFACE(MinimalAPI)
class UGameRulesInterface : public UInterface
{
    GENERATED_BODY()
};

class SCC_UEAI_LECTURE_API IGameRulesInterface
{
    GENERATED_BODY()

public:
    // �÷��̾� ĸó ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportPlayerCapture(APawn* CapturedPlayer, AActor* Captor);

    // �÷��̾� ���� ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportPlayerDetection(APawn* DetectedPlayer, AActor* Detector);

    // ��� ���� ���� ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportAlertLevelChange(AActor* Guard, uint8 NewAlertLevel);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportGetCoin(int32 type);

    // �÷��̾� ���/���� ȹ�� ���൵ ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    int32 ReportCurrentLives();
};

// ������ �������̽�
UINTERFACE(MinimalAPI)
class UGuardInterface : public UInterface
{
    GENERATED_BODY()
};

class SCC_UEAI_LECTURE_API IGuardInterface // AI ������ �������̽�
{
    GENERATED_BODY()

public:
    // �ֱ� ���� ��ġ Ȯ��
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    FVector GetLastKnownPlayerLocation() const;

    // ��� ���� Ȯ��
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    uint8 GetAlertLevel() const;

    // Ÿ�� �÷��̾� Ȯ��
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    APawn* GetTargetPlayer() const;

    // �ٸ� ���忡�� �˸� ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    void ReceiveAlert(const FVector& Location, uint8 AlertLevel, AActor* AlertSource);

    // ����ó�� ����
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    void Persuaded();
};