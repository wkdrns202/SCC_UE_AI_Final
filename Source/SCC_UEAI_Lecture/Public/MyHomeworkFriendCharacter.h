#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "MyHomeworkFriendCharacter.generated.h"

UENUM(BlueprintType)
enum class EMoodState : uint8
{
    Neutral UMETA(DisplayName = "Neutral"),
    Happy UMETA(DisplayName = "Happy"),
    Curious UMETA(DisplayName = "Curious"),
    Sad UMETA(DisplayName = "Sad"),
    Scared UMETA(DisplayName = "Scared"),
    Angry UMETA(DisplayName = "Angry")
};

UCLASS()
class SCC_UEAI_LECTURE_API AMyHomeworkFriendCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyHomeworkFriendCharacter();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Target points for random navigation
    UPROPERTY(EditInstanceOnly, Category = "AI|Navigation")
    TArray<AActor*> TargetPoints;

    // Current mood of the NPC
    UPROPERTY(BlueprintReadWrite, Category = "AI|Mood")
    EMoodState CurrentMood;

    // Function to set a new mood
    UFUNCTION(BlueprintCallable, Category = "AI|Mood")
    void SetMood(EMoodState NewMood);

    // Function to check if current mood requires combat animation
    UFUNCTION(BlueprintPure, Category = "AI|Animation")
    bool ShouldPlayCombatAnimation() const;

    // Function called when this NPC sees another NPC
    UFUNCTION()
    void OnSeeOtherNPC(AMyHomeworkFriendCharacter* OtherNPC);

protected:
    // Current target point
    UPROPERTY()
    AActor* CurrentTargetPoint;

    // AI Controller
    UPROPERTY()
    class AAIController* AIController;

    // Is the NPC currently moving
    UPROPERTY()
    bool bIsMoving;

    // Time since last target selection
    float TimeSinceLastTargetSelection;

    // Interaction timer
    float InteractionTimer;

    // Interaction Interval
    float InteractionInterval;

    // DetctionRange 초기화
    bool bResetDetectionRange;

    // Time to move to next target
    UPROPERTY(EditDefaultsOnly, Category = "AI|Navigation")
    float MoveToNextTargetTime;

    // Detection range for other NPCs
    UPROPERTY(EditDefaultsOnly, Category = "AI|Interaction")
    float DetectionRange;

    // Select next random target point
    AActor* GetNextRandomTargetPoint();

    // Move to the selected target point
    void MoveToTargetPoint(AActor* TargetPoint);

    // Check for nearby NPCs
    void CheckForNearbyAIs();

    // Function called when movement completes
    UFUNCTION()
    void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

    UPROPERTY()
    bool bIsFacing;

    // 감정 변화를 위한 타이머
    float MoodChangeTimer;

    // 감정 랜덤 변화 간격 (초)
    UPROPERTY(EditDefaultsOnly, Category = "AI|Mood")
    float MoodChangeInterval;

    // 랜덤 감정 변화 확률 (0-1)
    UPROPERTY(EditDefaultsOnly, Category = "AI|Mood")
    float MoodChangeChance;

    // 감정을 랜덤으로 변경하는 함수
    void TryRandomMoodChange();

    // 랜덤 감정 생성 함수
    EMoodState GetRandomMood();
};