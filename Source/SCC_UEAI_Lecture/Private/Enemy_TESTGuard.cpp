#include "Enemy_TESTGuard.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

AEnemy_TESTGuard::AEnemy_TESTGuard()
{
	PatrolLocationTag = TEXT("PatrolPoint");
}

void AEnemy_TESTGuard::FindTargetPoints()
{
	// Ÿ�� ����Ʈ�� �����Ǿ� ���� ���� ��� �ڵ����� ã��
	if (!Target || !Target2)
	{
		// �����Ϳ� �����ص� Tag ���Ӱ� ��ġ�ϴ� Target Points ����.
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


void AEnemy_TESTGuard::BeginPlay()
{
	Super::BeginPlay();

	// AI ��Ʈ�ѷ� ȹ��
	AIController = Cast<AAIController>(GetController());

	// AI ��Ʈ�ѷ��� ������ �̵� �Ϸ� �̺�Ʈ ���ε�
	if (AIController)
	{
		// ����� ���� ������ ���� ����ε� �ڵ� ����
		AIController->ReceiveMoveCompleted.RemoveDynamic(this, &AEnemy_TESTGuard::OnMoveCompleted);
		// �̵� �Ϸ� �̺�Ʈ ��������Ʈ ���ε�
		AIController->ReceiveMoveCompleted.AddDynamic(this, &AEnemy_TESTGuard::OnMoveCompleted);

		UE_LOG(LogTemp, Warning, TEXT("AIController found for %s"), *GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NO AIController found for %s"), *GetName());
	}

	// �ڵ����� �̵� ���� (�ʿ信 ���� �ּ� ó��)
	StartMoving();
}


void AEnemy_TESTGuard::StartMoving()
{
	// Ÿ�� ����Ʈ�� ã�� �̵� ����
	FindTargetPoints();
	MoveToTarget();
}

void AEnemy_TESTGuard::MoveToTarget()
{
	if (!AIController)
	{
		return;
	}

	if (bIsMoving)
	{
		// �̹� �̵� ���̸� �ߺ� ȣ�� ����
		return;
	}

	// IsSucceeded ���� ���� Ÿ�� ����
	AActor* SelectedTarget = bIsSucceeded ? Target : Target2;

	if (SelectedTarget)
	{
		bIsMoving = true;

		// AI MoveTo �Լ� ȣ��
		FVector TargetLocation = SelectedTarget->GetActorLocation();
		EPathFollowingRequestResult::Type MoveResult = AIController->MoveToLocation(
			TargetLocation,
			AcceptanceRadius,
			true,  // �������� ������ �Ǹ� �������� �������� ����.
			true,  // ��� ã�� ���
			false, // �������� ��� ����
			true   // �׺���̼� ������ ���
		);

		if (MoveResult == EPathFollowingRequestResult::Failed)
		{
			// UE_LOG(LogTemp, Warning, TEXT("Failed to start movement to target!"));
			bIsMoving = false;
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Moving to %s (IsSucceeded: %s)"),
				*SelectedTarget->GetName(), bIsSucceeded ? TEXT("True") : TEXT("False"));
		}
	}
	else
	{
		// UE_LOG(LogTemp, Error, TEXT("Selected target is not valid! Make sure Target and Target2 are set."));
	}
}

void AEnemy_TESTGuard::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
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
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemy_TESTGuard::MoveToTarget, 0.5f, false);
	}
	else
	{
		// �̵� ����
		UE_LOG(LogTemp, Warning, TEXT("Move failed with result: %d"), static_cast<int32>(Result));

		// ���� �ÿ��� �ٽ� �õ�
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemy_TESTGuard::MoveToTarget, 1.0f, false);
	}
}