#include "MyHomeworkFriendCharacter.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Navigation/PathFollowingComponent.h"
#include "Engine/TargetPoint.h"
#include "DrawDebugHelpers.h"

AMyHomeworkFriendCharacter::AMyHomeworkFriendCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize variables
    CurrentMood = EMoodState::Neutral;
    bIsMoving = false;
    bIsFacing = false;
    TimeSinceLastTargetSelection = 0.0f;
    InteractionTimer = 0.0f;
    MoveToNextTargetTime = 2.0f;
    InteractionInterval = 1.0f;
    DetectionRange = 100.0f;

    // 감정 변화 관련 초기화
    MoodChangeTimer = 0.0f;
    MoodChangeInterval = 10.0f;  // 10초마다 감정 변화 시도
    MoodChangeChance = 0.3f;     // 30% 확률로 감정 변화
}

void AMyHomeworkFriendCharacter::BeginPlay()
{
    Super::BeginPlay();

    // Get AI controller
    AIController = Cast<AAIController>(GetController());

    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("No AIController found! Character: %s"), *GetName());
        return;  // 중요: AIController 없으면 초기화 중단
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AIController found for %s"), *GetName());
    }

    // Set initial mood
    SetMood(EMoodState::Neutral);

    // Gather TargetPoints - 수정된 부분
    TargetPoints.Empty();  // 먼저 비우기
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), TargetPoints);
    UE_LOG(LogTemp, Warning, TEXT("Found %d TargetPoints"), TargetPoints.Num());

    // Set a random initial target point
    if (TargetPoints.Num() > 0)
    {
        CurrentTargetPoint = GetNextRandomTargetPoint();
        UE_LOG(LogTemp, Warning, TEXT("Initial target: %s"), *CurrentTargetPoint->GetName());
        MoveToTargetPoint(CurrentTargetPoint);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No TargetPoints found!"));
    }

    // Bind to move completed event
    AIController->ReceiveMoveCompleted.AddDynamic(this, &AMyHomeworkFriendCharacter::OnMoveCompleted);
}

void AMyHomeworkFriendCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 기존 타이머 업데이트
    TimeSinceLastTargetSelection += DeltaTime;
    InteractionTimer += DeltaTime;

    // 감정 변화 타이머 업데이트
    MoodChangeTimer += DeltaTime;
    if (MoodChangeTimer >= MoodChangeInterval)
    {
        TryRandomMoodChange();
        MoodChangeTimer = 0.0f;
    }

    // 충분히 교류(2초이상) 후 다음 타겟 포인트로 이동.
    if (!bIsMoving && TimeSinceLastTargetSelection >= MoveToNextTargetTime)
    {
        bIsFacing = false;  // 움직이기 시작하면 상호작용 상태 초기화

        CurrentTargetPoint = GetNextRandomTargetPoint();
        MoveToTargetPoint(CurrentTargetPoint);
        TimeSinceLastTargetSelection = 0.0f;
        
    }

    // Check for nearby AIs to interact with
    if (InteractionTimer >= InteractionInterval)
    {
        InteractionInterval = 0.3f;
        CheckForNearbyAIs();
        InteractionTimer = 0.0f;
    }

    if (bResetDetectionRange)
    {
        DetectionRange = FMath::Min(DetectionRange + 10 * DeltaTime , 100.0f); // Range 천천히 회복하도록 디자인
        // UE_LOG(LogTemp, Warning, TEXT("DetectionRange is : %f"), DetectionRange); 디버깅용
    } 
}

// 랜덤 감정 생성 함수
EMoodState AMyHomeworkFriendCharacter::GetRandomMood()
{
    // 6개의 감정 중 하나를 랜덤으로 선택
    int32 MoodIndex = FMath::RandRange(0, 5);

    switch (MoodIndex)
    {
    case 0: return EMoodState::Neutral;
    case 1: return EMoodState::Happy;
    case 2: return EMoodState::Curious;
    case 3: return EMoodState::Sad;
    case 4: return EMoodState::Scared;
    case 5: return EMoodState::Angry;
    default: return EMoodState::Neutral;
    }
}

void AMyHomeworkFriendCharacter::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
    bIsMoving = false;
    TimeSinceLastTargetSelection = 0.0f;

    // 목적지 도착 시 일정 확률로 감정 변화
    float Random = FMath::FRand();
    if (Random <= 0.5f)  // 50% 확률로 감정 변화
    {
        EMoodState NewMood = GetRandomMood();
        SetMood(NewMood);
        UE_LOG(LogTemp, Warning, TEXT("%s: Arrived at destination, mood changed to %d"), *GetName(), (int32)NewMood);
    }
}

// 랜덤 감정 변화 시도 함수 
void AMyHomeworkFriendCharacter::TryRandomMoodChange()
{
    // 상호작용 중이면 감정 변화 무시
    if (bIsFacing)
    {
        return;
    }

    // 확률에 따라 감정 변화
    float Random = FMath::FRand();  // 0.0-1.0 사이의 랜덤 값
    if (Random <= MoodChangeChance)
    {
        EMoodState NewMood = GetRandomMood();
        SetMood(NewMood);
        UE_LOG(LogTemp, Warning, TEXT("%s: Mood randomly changed to %d"), *GetName(), (int32)NewMood);
    }
}

AActor* AMyHomeworkFriendCharacter::GetNextRandomTargetPoint()
{
    if (TargetPoints.Num() == 0)
    {
        return nullptr;
    }

    // Get random target point different from current one
    TArray<AActor*> PossibleTargets = TargetPoints;
    if (CurrentTargetPoint)
    {
        PossibleTargets.Remove(CurrentTargetPoint);
    }

    if (PossibleTargets.Num() == 0)
    {
        // If somehow all targets were removed, use the full array
        PossibleTargets = TargetPoints;
    }

    int32 RandomIndex = FMath::RandRange(0, PossibleTargets.Num() - 1);
    return PossibleTargets[RandomIndex];
}

void AMyHomeworkFriendCharacter::MoveToTargetPoint(AActor* TargetPoint)
{
    if (!AIController || !TargetPoint)
    {
        return;
    }

    FVector TargetLocation = TargetPoint->GetActorLocation();
    EPathFollowingRequestResult::Type MoveResult = AIController->MoveToLocation(
        TargetLocation,
        50.0f,  // Acceptance radius
        true,   // Allow partial path
        true,   // Use pathfinding
        false,  // No projection
        true    // Can strafe
    );

    if (MoveResult == EPathFollowingRequestResult::RequestSuccessful)
    {
        bIsMoving = true;
        bResetDetectionRange = true; // DetectionRange 초기화.
    }
}

void AMyHomeworkFriendCharacter::CheckForNearbyAIs()
{
    
    if (bIsFacing)
    {
        return;
    }
    // Get all AINPC actors
    TArray<AActor*> AIs;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyHomeworkFriendCharacter::StaticClass(), AIs);

    for (AActor* Actor : AIs)
    {
        AMyHomeworkFriendCharacter* OtherNPC = Cast<AMyHomeworkFriendCharacter>(Actor);
        if (OtherNPC && OtherNPC != this)
        {
            float Distance = FVector::Dist(GetActorLocation(), OtherNPC->GetActorLocation());

            // If within detection range (100)
            if (Distance <= DetectionRange)
            {
                // We spotted another NPC, interact with it
                OnSeeOtherNPC(OtherNPC);
                bIsFacing = true;
                InteractionInterval = 3.0f;
                // Draw debug line to visualize the detection
                DrawDebugLine(
                    GetWorld(),
                    GetActorLocation(),
                    OtherNPC->GetActorLocation(),
                    FColor::Green,
                    false,
                    1.0f,
                    0,
                    2.0f
                );
                // 일시적으로 Detection Range 제거하여 반복교류 불가능하게 설계.
                DetectionRange = 0.0f; 
                // Only interact with one NPC at a time
                break;
            }
        }
    }
}

void AMyHomeworkFriendCharacter::SetMood(EMoodState NewMood)
{
    CurrentMood = NewMood;
}

bool AMyHomeworkFriendCharacter::ShouldPlayCombatAnimation() const
{
    return (CurrentMood == EMoodState::Sad ||
        CurrentMood == EMoodState::Scared ||
        CurrentMood == EMoodState::Angry);
}

// Get All Actors of Classes 통해 수집한 AI 데이터로 활용.
void AMyHomeworkFriendCharacter::OnSeeOtherNPC(AMyHomeworkFriendCharacter* OtherNPC)
{
    if (!OtherNPC)
    {
        return;
    }

    // Check if other NPC is in combat mode
    if (OtherNPC->ShouldPlayCombatAnimation())
    {
        // If the other NPC is in combat mode, we also switch to combat mode
        SetMood(EMoodState::Angry);
        UE_LOG(LogTemp, Warning, TEXT("Other AI Mood Changed to Angry"))
    }
    else
    {
        // If the other NPC is not in combat mode, we choose Curious mood
        SetMood(EMoodState::Curious);
        UE_LOG(LogTemp, Warning, TEXT("AI Mood Change/Maintain to Curious"))
    }

    // Stop moving to interact
    if (AIController && bIsMoving)
    {
        AIController->StopMovement();
        bIsMoving = false;
    }

    // Face the other NPC
    FVector Direction = OtherNPC->GetActorLocation() - GetActorLocation();
    FRotator NewRotation = Direction.Rotation();
    NewRotation.Pitch = 0.0f;
    NewRotation.Roll = 0.0f;
    SetActorRotation(NewRotation);

    // Resume movement after a delay
    TimeSinceLastTargetSelection = -3.0f;  // Negative value to create a delay
}