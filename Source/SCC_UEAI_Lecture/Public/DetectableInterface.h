#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DetectableInterface.generated.h"

// 인터페이스 선언
UINTERFACE(MinimalAPI)
class UDetectableInterface : public UInterface
{
    GENERATED_BODY()
};

// 플레이어용 인터페이스
class SCC_UEAI_LECTURE_API IDetectableInterface 
{
    GENERATED_BODY()

public:
    // 감지 가능 여부 확인 (스텔스 모드 아닌지)
    // 엔진에서는 아래와 같이 BlueprintNativeEvent의 함수의 경우, 실제 구현은 본 인터페이스 자체가 아니라 이 인터페이스를 구현하는 클래스(PlayerCharacer)에 있음.
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    bool CanBeDetected() const;

    // 소음 발생 가능 여부 확인
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    bool CanMakeNoise() const;

    // 캡처되었을 때 호출
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Detection")
    void CapturedByAI();
};

// 게임 룰 관리 인터페이스
UINTERFACE(MinimalAPI)
class UGameRulesInterface : public UInterface
{
    GENERATED_BODY()
};

class SCC_UEAI_LECTURE_API IGameRulesInterface
{
    GENERATED_BODY()

public:
    // 플레이어 캡처 보고
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportPlayerCapture(APawn* CapturedPlayer, AActor* Captor);

    // 플레이어 감지 보고
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportPlayerDetection(APawn* DetectedPlayer, AActor* Detector);

    // 경계 상태 변경 보고
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportAlertLevelChange(AActor* Guard, uint8 NewAlertLevel);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    void ReportGetCoin(int32 type);

    // 플레이어 목숨/코인 획득 진행도 보고
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Game Rules")
    int32 ReportCurrentLives();
};

// 감시자 인터페이스
UINTERFACE(MinimalAPI)
class UGuardInterface : public UInterface
{
    GENERATED_BODY()
};

class SCC_UEAI_LECTURE_API IGuardInterface // AI 경찰용 인터페이스
{
    GENERATED_BODY()

public:
    // 최근 감지 위치 확인
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    FVector GetLastKnownPlayerLocation() const;

    // 경계 레벨 확인
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    uint8 GetAlertLevel() const;

    // 타겟 플레이어 확인
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    APawn* GetTargetPlayer() const;

    // 다른 가드에게 알림 받음
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    void ReceiveAlert(const FVector& Location, uint8 AlertLevel, AActor* AlertSource);

    // 설득처리 로직
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Guard")
    void Persuaded();
};