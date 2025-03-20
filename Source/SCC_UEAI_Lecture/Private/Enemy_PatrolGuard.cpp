#include "Enemy_PatrolGuard.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

AEnemy_PatrolGuard::AEnemy_PatrolGuard()
{
	PatrolLocationTag = TEXT("PatrolPoint");
}

void AEnemy_PatrolGuard::FindTargetPoints()
{
	// 타겟 포인트가 설정되어 있지 않은 경우 자동으로 찾기
	if (!Target || !Target2)
	{
		// 에디터에 설정해둔 Tag 네임과 일치하는 Target Points 수집.
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


void AEnemy_PatrolGuard::BeginPlay()
{
	Super::BeginPlay();

	// AI 컨트롤러 획득
	AIController = Cast<AAIController>(GetController());

	// AI 컨트롤러가 있으면 이동 완료 이벤트 바인딩
	if (AIController)
	{
		// 디버깅 에러 방지를 위해 언바인딩 코드 실행
		AIController->ReceiveMoveCompleted.RemoveDynamic(this, &AEnemy_PatrolGuard::OnMoveCompleted);
		// 이동 완료 이벤트 델리게이트 바인딩
		AIController->ReceiveMoveCompleted.AddDynamic(this, &AEnemy_PatrolGuard::OnMoveCompleted);

		UE_LOG(LogTemp, Warning, TEXT("AIController found for %s"), *GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NO AIController found for %s"), *GetName());
	}

	// 자동으로 이동 시작 (필요에 따라 주석 처리)
	StartMoving();
}


void AEnemy_PatrolGuard::StartMoving()
{
	// 타겟 포인트를 찾고 이동 시작
	FindTargetPoints();
	MoveToTarget();
}

void AEnemy_PatrolGuard::MoveToTarget()
{
	if (!AIController)
	{
		return;
	}

	if (bIsMoving)
	{
		// 이미 이동 중이면 중복 호출 방지
		return;
	}

	// IsSucceeded 값에 따라 타겟 선택
	AActor* SelectedTarget = bIsSucceeded ? Target : Target2;

	if (SelectedTarget)
	{
		bIsMoving = true;

		// AI MoveTo 함수 호출
		FVector TargetLocation = SelectedTarget->GetActorLocation();
		EPathFollowingRequestResult::Type MoveResult = AIController->MoveToLocation(
			TargetLocation,
			AcceptanceRadius,
			true,  // 목적지에 오버랩 되면 도착으로 판정할지 여부.
			true,  // 경로 찾기 사용
			false, // 프로젝션 사용 안함
			true   // 네비게이션 데이터 사용
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

void AEnemy_PatrolGuard::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	bIsMoving = false;

	// 이동 결과에 따라 IsSucceeded 값 토글
	if (Result == EPathFollowingResult::Success)
	{
		// 성공적으로 이동 완료됨
		bIsSucceeded = !bIsSucceeded;  // 값 토글
		// UE_LOG(LogTemp, Display, TEXT("Move completed successfully. IsSucceeded toggled to: %s"), bIsSucceeded ? TEXT("True") : TEXT("False"));

		// 지연 후 다음 이동 시작
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemy_PatrolGuard::MoveToTarget, 0.5f, false);
	}
	else
	{
		// 이동 실패
		UE_LOG(LogTemp, Warning, TEXT("Move failed with result: %d"), static_cast<int32>(Result));

		// 실패 시에도 다시 시도
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemy_PatrolGuard::MoveToTarget, 1.0f, false);
	}
}