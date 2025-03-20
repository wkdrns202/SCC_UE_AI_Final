#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerDetectionHandler.generated.h"

/**
 * 플레이어가 AI 탐지를 종료하는 기능을 처리하는 클래스
 */
UCLASS()
class SCC_UEAI_LECTURE_API APlayerDetectionHandler : public AActor
{
    GENERATED_BODY()

public:
    APlayerDetectionHandler();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;



     // 비헤이비어 트리 설정 요약
     /**
      * 비헤이비어 트리 설정:
      *
      * 1. 블랙보드 키:
      *    - DetectionCount (Int)
      *    - AlertLevel (Enum)
      *    - PlayerLocation (Vector)
      *    - HomeLocation (Vector)
      *    - CanSeePlayer (Bool)
      *    - IsInvestigating (Bool)
      *
      * 2. 경계 수준 시스템:
      *    - Idle (0-1 감지): 일반 순찰
      *    - Suspicious (2-4 감지): 수상한 장소 조사
      *    - Chasing (5+ 감지): 적극적 추적
      */

      // 구현 노트
      /**
       * 구현 참고 사항:
       *
       * 1. AAI_DetectionGuard 클래스는 AEnemy_BaseGuard 없이 독립적으로 구현됨
       * 2. 플레이어 감지 시 카운터가 증가하며 경계 수준 변화
       * 3. 경계 수준에 따라 AI 행동과 속도가 변화함
       * 4. 플레이어가 키를 누르면 근처 AI의 추적을 중단시킬 수 있음
       * 5. 비헤이비어 트리로 AI 로직 제어
       */

};