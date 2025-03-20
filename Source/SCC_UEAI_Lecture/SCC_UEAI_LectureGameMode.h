#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DetectableInterface.h"
#include "Blueprint/UserWidget.h"
#include "SCC_UEAI_LectureGameMode.generated.h"

// ��������Ʈ�� �̺�Ʈ �߻�->�����ڿ��� �˸� ���� ������ ������ �����ϴ� �𸮾� ��Ŀ����. Ư�� �̺�Ʈ�� �����ڷ� ����صθ�, ���� �����ִ°Ͱ� ���������� ����.
// �Ʒ��� ��������Ʈ ����
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerCapturedSignature, APawn*, CapturedPlayer, AActor*, Captor); 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerDetectedSignature, APawn*, DetectedPlayer, AActor*, Detector);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAlertLevelChangedSignature, AActor*, Guard, uint8, NewAlertLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinCollectedSignature, int32, FloorNumber);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloorCoinCollectedSignature, int32, FloorNumber);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeUpdatedSignature, float, RemainingTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameOverSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameWinSignature);

UCLASS(minimalapi)
class ASCC_UEAI_LectureGameMode : public AGameModeBase, public IGameRulesInterface
{
    GENERATED_BODY()

public:
    ASCC_UEAI_LectureGameMode();

    // �������̽� ����
    virtual void ReportPlayerCapture_Implementation(APawn* CapturedPlayer, AActor* Captor) override;
    virtual void ReportPlayerDetection_Implementation(APawn* DetectedPlayer, AActor* Detector) override;
    virtual void ReportAlertLevelChange_Implementation(AActor* Guard, uint8 NewAlertLevel) override;
    virtual int32 ReportCurrentLives_Implementation() override;
    virtual void ReportGetCoin_Implementation(int32 Coin) override;


    // ���� �� �⺻ �Ӽ�
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    float MaxGameTime = 120.0f; // 2��

    UPROPERTY(BlueprintReadOnly, Category = "Game Rules")
    float RemainingTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 MaxCaptureCount = 3; // �ִ� ü�� Ƚ��

    UPROPERTY(BlueprintReadOnly, Category = "Game Rules")
    int32 CurrentCaptureCount = 0; // ���� Ƚ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 TotalFloors = 2; // �� �� ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 TotalCoins = 6; // �� ���� ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool bIsGoldBarCollected; // GoldBar ��� �����ߴ��� Ȯ�� (�¸����)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool b2FCoinCollected; // 2�� ���� ��� �����ߴ��� ���� Ȯ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool bIsAllCoinsCollected; // ��� ������ ��� �����ߴ��� ���� Ȯ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 CollectedCoins = 0; // ȹ�� ���� ����

    // ���� �̺�Ʈ ��������Ʈ
    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnPlayerCapturedSignature OnPlayerCaptured;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnPlayerDetectedSignature OnPlayerDetected;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnAlertLevelChangedSignature OnAlertLevelChanged;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnCoinCollectedSignature OnCoinCollected;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnFloorCoinCollectedSignature OnFloorCoinCollected;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnTimeUpdatedSignature OnTimeUpdated;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnGameOverSignature OnGameOver;

    UPROPERTY(BlueprintAssignable, Category = "Game Events")
    FOnGameWinSignature OnGameWin;

    // ���� ���� �� �ʱ�ȭ
    virtual void StartPlay() override;

    // ���� Ÿ�̸� ������Ʈ
    virtual void Tick(float DeltaTime) override;

    // ���� ���� ó��
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void CollectCoin(int32 FloorNumber);

    // ���� �¸� ���� Ȯ��
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    bool CheckWinCondition();

    // ���� ���� ���� Ȯ��
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    bool CheckGameOverCondition();

    // ���� ���� ó��
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void TriggerGameOver();

    // ���� �¸� ó��
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void TriggerGameWin();

    // ���� �� �˸�(�÷��̾ ���� �̵��� �� ȣ��)
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void NotifyFloorChange(int32 NewFloor);

    // ���ӽ��� UI 
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> GameStartWidgetClass;

    UPROPERTY()
    UUserWidget* GameStartWidget; // ���θ޴�

    // ���ӿ��� UI
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> GameOverWidgetClass;

    UPROPERTY()
    UUserWidget* GameOverWidget;

    UPROPERTY(BlueprintReadOnly, Category = "UI")
    UUserWidget* CurrentWidget;

    // UI ǥ�� �Լ�
    UFUNCTION(BlueprintCallable, Category = "UI")
    void ShowGameStartWidget();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void ShowGameOverWidget();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void RemoveCurrentWidget();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void QuitGame();

    UPROPERTY(BlueprintReadOnly)
    bool bIsPlayerWin;

private:
    FTimerHandle GameTimerHandle;
    bool bGameEnded = false;
    int32 CurrentPlayerFloor = 1;

    void UpdateGameTimer();
};

