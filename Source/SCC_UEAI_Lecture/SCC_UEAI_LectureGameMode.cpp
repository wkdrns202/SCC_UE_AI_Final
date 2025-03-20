#include "SCC_UEAI_LectureGameMode.h"
#include "SCC_UEAI_LectureCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

ASCC_UEAI_LectureGameMode::ASCC_UEAI_LectureGameMode()
{
    // �⺻ �� Ŭ���� ����
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    // ���� ƽ Ȱ��ȭ
    PrimaryActorTick.bCanEverTick = true;

    // ���� �ð� �ʱ�ȭ
    RemainingTime = MaxGameTime;


}

void ASCC_UEAI_LectureGameMode::StartPlay()
{
    Super::StartPlay();

    // ���� ������ �ʱ�ȭ

    bIsGoldBarCollected = false;
    b2FCoinCollected = false;
    bIsAllCoinsCollected = false;

    // ���� Ÿ�̸� ����
    GetWorldTimerManager().SetTimer(GameTimerHandle, this, &ASCC_UEAI_LectureGameMode::UpdateGameTimer, 1.0f, true);  

    // ��ǲ ���� �������̵�
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        // ���� �Է� ��� ����
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    // �������� "Chapter4"�� �ƴѰ�츸 UI�� ǥ���ϵ��� ������
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

    // ���� ���� �߿��� Ÿ�̸� ����
    if (!bGameEnded)
    {
        RemainingTime -= DeltaTime;

        // 1�ʸ��� �̺�Ʈ �߻� ��� ƽ���� �ð� ������Ʈ
        OnTimeUpdated.Broadcast(RemainingTime);

        // �ð� �ʰ� üũ
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
    // ������ Ÿ�� Ȯ��
    if (ItemType < 0 || ItemType > 1)
    {
        return;
    }

    // �Ϲ� �����̰ų� ������ ��� ���� ī��Ʈ
    CollectedCoins++;
    OnCoinCollected.Broadcast(ItemType);

    if (ItemType == 1)
    {
        // ���� ȹ��
        bIsGoldBarCollected = true;
    }

    // �¸� ���� Ȯ��
    if (CheckWinCondition())
    {
        TriggerGameWin();
    }
}

bool ASCC_UEAI_LectureGameMode::CheckWinCondition()
{
    // ��� ������ �����ߴ��� Ȯ��
    return CollectedCoins >= TotalCoins && bIsGoldBarCollected;
}

bool ASCC_UEAI_LectureGameMode::CheckGameOverCondition()
{
    // ���� ���� ����: �ð� �ʰ� �Ǵ� �ִ� ü�� Ƚ�� �ʰ�
    return RemainingTime <= 0.0f || CurrentCaptureCount >= MaxCaptureCount;
}

void ASCC_UEAI_LectureGameMode::TriggerGameOver()
{
    if (bGameEnded)
    {
        return;
    }

    bGameEnded = true;

    // ���� Ÿ�̸� ����
    GetWorldTimerManager().ClearTimer(GameTimerHandle);

    // ���� ���� �̺�Ʈ �߻�
    OnGameOver.Broadcast();

    // �÷��̾� ��Ʈ�ѷ��� ���� ���� �˸�
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        bIsPlayerWin = false;
        PC->SetPause(true);

        DisableInput(PC);

        // ���ӿ��� UI ���� ���� �� ǥ��
        if (GameOverWidgetClass != nullptr)
        {
            GameOverWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (GameOverWidget)
            {
                GameOverWidget->AddToViewport();
                
                // UI ������ ���� �Է� ��� ����
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

    // ���� Ÿ�̸� ����
    GetWorldTimerManager().ClearTimer(GameTimerHandle);

    // ���� �¸� �̺�Ʈ �߻�. .Broadcast()�� �̺�Ʈ �߻� �� ���ε��� ��� �Լ� ȣ���ϴ� ����. (���ε��� �̺�Ʈ-�Լ����� ����(����)�ϴ°� �ǹ���.)
    OnGameWin.Broadcast();

    // �÷��̾� ��Ʈ�ѷ��� ���� �¸� �˸�
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        PC->SetPause(true);
        UE_LOG(LogTemp, Error, TEXT("YOU WIN!"));
        bIsPlayerWin = true;
        // ���ӿ��� UI ���� ���� �� ǥ��
        if (GameOverWidgetClass != nullptr)
        {
            GameOverWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (GameOverWidget)
            {
                GameOverWidget->AddToViewport();

                // UI ������ ���� �Է� ��� ����
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}

void ASCC_UEAI_LectureGameMode::NotifyFloorChange(int32 NewFloor)
{
    // ��ȿ�� �� ��ȣ Ȯ��
    if (NewFloor <= 0 || NewFloor > 3)
    {
        return;
    }

    // ���� �� ������Ʈ
    CurrentPlayerFloor = NewFloor;
}

void ASCC_UEAI_LectureGameMode::UpdateGameTimer()
{
    // �� �ʸ��� ȣ��Ǵ� Ÿ�̸� ������Ʈ
    if (bGameEnded)
    {
        UE_LOG(LogTemp, Warning, TEXT("�����ð�: %f ��"), RemainingTime);
        return;
    }
    // 1�ʸ��� �̺�Ʈ �߻� (Tick������ ó���ϴ� ��� �ּ� ó��)
    // OnTimeUpdated.Broadcast(RemainingTime);
}

void ASCC_UEAI_LectureGameMode::ShowGameStartWidget()
{
    RemoveCurrentWidget();

    // ���� �޴� ���� ���� �� ǥ��

    if (GameStartWidgetClass)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
        if (PC)
        {
            CurrentWidget = CreateWidget<UUserWidget>(PC, GameStartWidgetClass);
            if (CurrentWidget)
            {
                CurrentWidget->AddToViewport();

                // UI�Է¸�� ����
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

    // ���� �޴� ���� ���� �� ǥ��

    if (GameOverWidgetClass)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);

        if (PC)
        {
            CurrentWidget = CreateWidget<UUserWidget>(PC, GameOverWidgetClass);
            if (CurrentWidget)
            {
                CurrentWidget->AddToViewport();

                // UI�Է¸�� ����
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

// IGameRulesInterface ����
void ASCC_UEAI_LectureGameMode::ReportPlayerCapture_Implementation(APawn* CapturedPlayer, AActor* Captor)
{
    // �÷��̾� ü�� ���� ó��
    if (!bGameEnded)
    {
        CurrentCaptureCount++;
        // �̺�Ʈ �߻�
        OnPlayerCaptured.Broadcast(CapturedPlayer, Captor); 

        // ���� ���� ���� Ȯ��
        if (CheckGameOverCondition())
        {
            TriggerGameOver();
        }
    }
}

void ASCC_UEAI_LectureGameMode::ReportPlayerDetection_Implementation(APawn* DetectedPlayer, AActor* Detector)
{
    // �÷��̾� ���� ���� ó��
    if (!bGameEnded)
    {
        // �̺�Ʈ �߻�
        OnPlayerDetected.Broadcast(DetectedPlayer, Detector); // �����ڰ� ������ ����ص� ���ǹ���.
    }
}

void ASCC_UEAI_LectureGameMode::ReportAlertLevelChange_Implementation(AActor* Guard, uint8 NewAlertLevel)
{
    // ���� ��� ���� ���� ���� ó��
    if (!bGameEnded)
    {
        // �̺�Ʈ �߻�
        OnAlertLevelChanged.Broadcast(Guard, NewAlertLevel);
    }
}

// ���� ���� �� ��ȯ �Լ�
int32 ASCC_UEAI_LectureGameMode::ReportCurrentLives_Implementation()
{
    if (!bGameEnded)
    {
        // ���� ���� �� ��ȯ (�ִ� ü�� Ƚ�� - ���� ü�� Ƚ��)
        return MaxCaptureCount - CurrentCaptureCount;
    }
    return 0;
}

void ASCC_UEAI_LectureGameMode::ReportGetCoin_Implementation(int32 type)
{
    if (!bGameEnded)
    {
        // ���� ȹ�� ó�� ����
        CollectCoin(type);
    }
}