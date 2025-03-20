#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CoolGuyAIController.h"
#include "CoolGuyAICharacter.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API ACoolGuyAICharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ACoolGuyAICharacter();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    //// 아래 코드 추가

    // 패트롤 포인트 설정 (컨트롤러에서 호출)
    void SetPatrolPoints(const TArray<FVector>& Points);

private:
    // 현재 목표 위치
    FVector CurrentTargetLocation;

    // 패트롤 포인트 배열
    TArray<FVector> PatrolPoints;

    // 현재 인덱스
    int32 CurrentPatrolIndex = 0;

    // 목표 지점에 도달했는지 확인하는 함수
    bool IsCloseToTarget(float AcceptableDistance = 100.0f);

    // 다음 패트롤 포인트로 이동
    void MoveToNextPatrolPoint();

    // AI 컨트롤러 참조
    ACoolGuyAIController* AIController;

    // 블랙보드 컴포넌트 참조
    UBlackboardComponent* BlackboardComp;
};