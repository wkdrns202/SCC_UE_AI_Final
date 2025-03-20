// 챕터 2 과제 1 소스코드 CPP

#include "MyFriendCharacter.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyFriendCharacter::AMyFriendCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PatrolLocationTag = TEXT("Point");
}

// Called when the game starts or when spawned
void AMyFriendCharacter::BeginPlay()
{
	Super::BeginPlay();
	AIController = Cast<AAIController>(GetController());

	if (AIController)
	{
		AIController->ReceiveMoveCompleted.RemoveDynamic(this, &AMyFriendCharacter::OnMoveCompleted);
		AIController->ReceiveMoveCompleted.AddDynamic(this, &AMyFriendCharacter::OnMoveCompleted);
	}
	StartMoving();
}

void AMyFriendCharacter::StartMoving()
{
	FindTargetPoints();
	MoveToTarget();
}

void AMyFriendCharacter::MoveToTarget()
{
	if (!AIController)
	{
		return;
	}

	if (bIsMoving)
	{
		return;
	}

	AActor* SelectedTarget = bIsSucceeded ? Target : Target2;

	if (SelectedTarget && PatrolCount < 7)
	{
		bIsMoving = true;

		FVector TargetLocation = SelectedTarget->GetActorLocation();
		EPathFollowingRequestResult::Type MoveResult = AIController->MoveToLocation(
			TargetLocation,
			AcceptanceRadius,
			true,
			true,
			false,
			true
		);
		PatrolCount++; // 이동회수 카운트
		
		if (SelectedTarget == Target)
		{
			UE_LOG(LogTemp, Warning, TEXT("AI Going to Target"));
		}

		if (MoveResult == EPathFollowingRequestResult::Failed)
		{
			bIsMoving = false;
		}
	}
}

/*
// Called every frame
void AMyFriendCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
*/

// Called to bind functionality to input
void AMyFriendCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyFriendCharacter::FindTargetPoints()
{
	if (!Target || !Target2)
	{
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), PatrolLocationTag, FoundTargets);
		// UE_LOG(LogTemp, Warning, TEXT("%s"), *PatrolLocationTag.ToString());

		if (FoundTargets.Num() >= 2)
		{
			Target = FoundTargets[0];
			Target2 = FoundTargets[1];
			UE_LOG(LogTemp, Display, TEXT("Found TargetPoints: %s and %s"),
				*Target->GetName(), *Target2->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Not enough TargetPoints found in the level, need at least 2!"));
		}
	}
}

void AMyFriendCharacter::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	bIsMoving = false;

	// �̵� ����� ���� IsSucceeded �� ���
	if (Result == EPathFollowingResult::Success)
	{
		// ���������� �̵� �Ϸ��
		bIsSucceeded = !bIsSucceeded;  // �� ���
		// UE_LOG(LogTemp, Display, TEXT("Move completed successfully. IsSucceeded toggled to: %s"), bIsSucceeded ? TEXT("True") : TEXT("False"));

		// ���� �� ���� �̵� ����
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyFriendCharacter::MoveToTarget, 0.5f, false);
	}
	else
	{
		// �̵� ����
		UE_LOG(LogTemp, Warning, TEXT("Move failed with result: %d"), static_cast<int32>(Result));

		// ���� �ÿ��� �ٽ� �õ�
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyFriendCharacter::MoveToTarget, 1.0f, false);
	}
}