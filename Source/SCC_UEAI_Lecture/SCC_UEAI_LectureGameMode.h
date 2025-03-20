#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DetectableInterface.h"
#include "Blueprint/UserWidget.h"
#include "SCC_UEAI_LectureGameMode.generated.h"

// 델리게이트는 이벤트 발생->구독자에게 알림 등의 옵저버 패턴을 구현하는 언리얼 메커니즘. 특정 이벤트에 수신자로 등록해두면, 메일 날려주는것과 개념적으로 동일.
// 아래는 델리게이트 선언
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

    // 인터페이스 구현
    virtual void ReportPlayerCapture_Implementation(APawn* CapturedPlayer, AActor* Captor) override;
    virtual void ReportPlayerDetection_Implementation(APawn* DetectedPlayer, AActor* Detector) override;
    virtual void ReportAlertLevelChange_Implementation(AActor* Guard, uint8 NewAlertLevel) override;
    virtual int32 ReportCurrentLives_Implementation() override;
    virtual void ReportGetCoin_Implementation(int32 Coin) override;


    // 게임 룰 기본 속성
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    float MaxGameTime = 120.0f; // 2분

    UPROPERTY(BlueprintReadOnly, Category = "Game Rules")
    float RemainingTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 MaxCaptureCount = 3; // 최대 체포 횟수

    UPROPERTY(BlueprintReadOnly, Category = "Game Rules")
    int32 CurrentCaptureCount = 0; // 잡힌 횟수

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 TotalFloors = 2; // 총 층 수

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 TotalCoins = 6; // 총 코인 수

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool bIsGoldBarCollected; // GoldBar 모두 수집했는지 확인 (승리요건)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool b2FCoinCollected; // 2층 코인 모두 수집했는지 여부 확인

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    bool bIsAllCoinsCollected; // 모든 코인을 모두 수집했는지 여부 확인

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
    int32 CollectedCoins = 0; // 획득 코인 개수

    // 게임 이벤트 델리게이트
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

    // 게임 시작 시 초기화
    virtual void StartPlay() override;

    // 게임 타이머 업데이트
    virtual void Tick(float DeltaTime) override;

    // 코인 수집 처리
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void CollectCoin(int32 FloorNumber);

    // 게임 승리 조건 확인
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    bool CheckWinCondition();

    // 게임 오버 조건 확인
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    bool CheckGameOverCondition();

    // 게임 오버 처리
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void TriggerGameOver();

    // 게임 승리 처리
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void TriggerGameWin();

    // 현재 층 알림(플레이어가 층을 이동할 때 호출)
    UFUNCTION(BlueprintCallable, Category = "Game Rules")
    void NotifyFloorChange(int32 NewFloor);

    // 게임시작 UI 
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> GameStartWidgetClass;

    UPROPERTY()
    UUserWidget* GameStartWidget; // 메인메뉴

    // 게임오버 UI
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> GameOverWidgetClass;

    UPROPERTY()
    UUserWidget* GameOverWidget;

    UPROPERTY(BlueprintReadOnly, Category = "UI")
    UUserWidget* CurrentWidget;

    // UI 표시 함수
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

