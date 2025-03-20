#include "SCC_UEAI_LectureGameMode.h"
#include "SCC_UEAI_LectureCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

ASCC_UEAI_LectureGameMode::ASCC_UEAI_LectureGameMode()
{
    // 기본 폰 클래스 설정
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    // 게임 틱 활성화
    PrimaryActorTick.bCanEverTick = true;

    // 게임 시간 초기화
    RemainingTime = MaxGameTime;


}

void ASCC_UEAI_LectureGameMode::StartPlay()
{
    Super::StartPlay();

    // 층별 데이터 초기화

    bIsGoldBarCollected = false;
    b2FCoinCollected = false;
    bIsAllCoinsCollected = false;

    // 게임 타이머 시작
    GetWorldTimerManager().SetTimer(GameTimerHandle, this, &ASCC_UEAI_LectureGameMode::UpdateGameTimer, 1.0f, true);  

    // 인풋 세팅 오버라이드
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        // 게임 입력 모드 설정
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    // 레벨명이 "Chapter4"가 아닌경우만 UI를 표시하도록 디자인
    FString CurrentLevelName = GetWorld()->GetMapName();
    CurrentLevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
    if (!CurrentLevelName.Contains("Chapter4"))
    {
        ShowGameStartWidget();
    }
}

void ASCC_UEAI_LectureGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 게임 진행 중에만 타이머 감소
    if (!bGameEnded)
    {
        RemainingTime -= DeltaTime;

        // 1초마다 이벤트 발생 대신 틱마다 시간 업데이트
        OnTimeUpdated.Broadcast(RemainingTime);

        // 시간 초과 체크
        if (RemainingTime <= 0.0f)
        {
            RemainingTime = 0.0f;
            if (CheckGameOverCondition())
            {
                TriggerGameOver();
            }
        }

        if (CheckWinCondition())
        {
            TriggerGameWin();
        }
    }
}


void ASCC_UEAI_LectureGameMode::CollectCoin(int32 ItemType)
{
    // 아이템 타입 확인
    if (ItemType < 0 || ItemType > 1)
    {
        return;
    }

    // 일반 코인이거나 골드바일 경우 코인 카운트
    CollectedCoins++;
    OnCoinCollected.Broadcast(ItemType);

    if (ItemType == 1)
    {
        // 골드바 획득
        bIsGoldBarCollected = true;
    }

    // 승리 조건 확인
    if (CheckWinCondition())
    {
        TriggerGameWin();
    }
}

bool ASCC_UEAI_LectureGameMode::CheckWinCondition()
{
    // 모든 코인을 수집했는지 확인
    return CollectedCoins >= TotalCoins && bIsGoldBarCollected;
}

bool ASCC_UEAI_LectureGameMode::CheckGameOverCondition()
{
    // 게임 오버 조건: 시간 초과 또는 최대 체포 횟수 초과
    return RemainingTime <= 0.0f || CurrentCaptureCount >= MaxCaptureCount;
}

void ASCC_UEAI_LectureGameMode::TriggerGameOver()
{
    if (bGameEnded)
    {
        return;
    }

    bGameEnded = true;

    // 게임 타이머 중지
    GetWorldTimerManager().ClearTimer(GameTimerHandle);

    // 게임 오버 이벤트 발생
    OnGameOver.Broadcast();

    // 플레이어 컨트롤러에 게임 오버 알림
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        bIsPlayerWin = false;
        PC->SetPause(true);

        DisableInput(PC);

        // 게임오버 UI 위젯 생성 및 표시
        if (GameOverWidgetClass != nullptr)
        {
            GameOverWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (GameOverWidget)
            {
                GameOverWidget->AddToViewport();
                
                // UI 조작을 위한 입력 모드 설정
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}

void ASCC_UEAI_LectureGameMode::TriggerGameWin()
{
    if (bGameEnded)
    {
        return;
    }

    bGameEnded = true;

    // 게임 타이머 중지
    GetWorldTimerManager().ClearTimer(GameTimerHandle);

    // 게임 승리 이벤트 발생. .Broadcast()는 이벤트 발생 시 바인딩된 모든 함수 호출하는 것임. (바인딩은 이벤트-함수끼리 연결(구독)하는걸 의미함.)
    OnGameWin.Broadcast();

    // 플레이어 컨트롤러에 게임 승리 알림
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        PC->SetPause(true);
        UE_LOG(LogTemp, Error, TEXT("YOU WIN!"));
        bIsPlayerWin = true;
        // 게임오버 UI 위젯 생성 및 표시
        if (GameOverWidgetClass != nullptr)
        {
            GameOverWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (GameOverWidget)
            {
                GameOverWidget->AddToViewport();

                // UI 조작을 위한 입력 모드 설정
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}

void ASCC_UEAI_LectureGameMode::NotifyFloorChange(int32 NewFloor)
{
    // 유효한 층 번호 확인
    if (NewFloor <= 0 || NewFloor > 3)
    {
        return;
    }

    // 현재 층 업데이트
    CurrentPlayerFloor = NewFloor;
}

void ASCC_UEAI_LectureGameMode::UpdateGameTimer()
{
    // 매 초마다 호출되는 타이머 업데이트
    if (bGameEnded)
    {
        UE_LOG(LogTemp, Warning, TEXT("남은시간: %f 초"), RemainingTime);
        return;
    }
    // 1초마다 이벤트 발생 (Tick에서도 처리하는 경우 주석 처리)
    // OnTimeUpdated.Broadcast(RemainingTime);
}

void ASCC_UEAI_LectureGameMode::ShowGameStartWidget()
{
    RemoveCurrentWidget();

    // 메인 메뉴 위젯 생성 및 표시

    if (GameStartWidgetClass)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
        if (PC)
        {
            CurrentWidget = CreateWidget<UUserWidget>(PC, GameStartWidgetClass);
            if (CurrentWidget)
            {
                CurrentWidget->AddToViewport();

                // UI입력모드 설정
                FInputModeUIOnly InputMode;
                InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
                PC->SetInputMode(InputMode);
                PC->bShowMouseCursor = true;
            }
        }
    }
}

void ASCC_UEAI_LectureGameMode::ShowGameOverWidget()
{
    RemoveCurrentWidget();

    // 메인 메뉴 위젯 생성 및 표시

    if (GameOverWidgetClass)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);

        if (PC)
        {
            CurrentWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (CurrentWidget)
            {
                CurrentWidget->AddToViewport();

                // UI입력모드 설정
                FInputModeUIOnly InputMode;
                InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
                PC->SetInputMode(InputMode);
                PC->bShowMouseCursor = true;
            }
        }
    }
}

void ASCC_UEAI_LectureGameMode::RemoveCurrentWidget()
{
    if (CurrentWidget)
    {
        CurrentWidget->RemoveFromParent();
        CurrentWidget = nullptr;
    }
}

void ASCC_UEAI_LectureGameMode::QuitGame()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);

    if (PC)
    {
        UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
    }
}

// IGameRulesInterface 구현
void ASCC_UEAI_LectureGameMode::ReportPlayerCapture_Implementation(APawn* CapturedPlayer, AActor* Captor)
{
    // 플레이어 체포 보고 처리
    if (!bGameEnded)
    {
        CurrentCaptureCount++;
        // 이벤트 발생
        OnPlayerCaptured.Broadcast(CapturedPlayer, Captor); 

        // 게임 오버 조건 확인
        if (CheckGameOverCondition())
        {
            TriggerGameOver();
        }
    }
}

void ASCC_UEAI_LectureGameMode::ReportPlayerDetection_Implementation(APawn* DetectedPlayer, AActor* Detector)
{
    // 플레이어 감지 보고 처리
    if (!bGameEnded)
    {
        // 이벤트 발생
        OnPlayerDetected.Broadcast(DetectedPlayer, Detector); // 구독자가 없으면 방송해도 무의미함.
    }
}

void ASCC_UEAI_LectureGameMode::ReportAlertLevelChange_Implementation(AActor* Guard, uint8 NewAlertLevel)
{
    // 경비원 경계 상태 변경 보고 처리
    if (!bGameEnded)
    {
        // 이벤트 발생
        OnAlertLevelChanged.Broadcast(Guard, NewAlertLevel);
    }
}

// 남은 생명 수 반환 함수
int32 ASCC_UEAI_LectureGameMode::ReportCurrentLives_Implementation()
{
    if (!bGameEnded)
    {
        // 남은 생명 수 반환 (최대 체포 횟수 - 현재 체포 횟수)
        return MaxCaptureCount - CurrentCaptureCount;
    }
    return 0;
}

void ASCC_UEAI_LectureGameMode::ReportGetCoin_Implementation(int32 type)
{
    if (!bGameEnded)
    {
        // 코인 획득 처리 로직
        CollectCoin(type);
    }
}