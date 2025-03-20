#include "SCC_UEAI_LectureCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/GameModeBase.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ASCC_UEAILectureCharacter

ASCC_UEAILectureCharacter::ASCC_UEAILectureCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	bIsSucceededPersuasion = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// 네비게이션 Invoker 관련 변수 초기화
	NavGenerationRadius = 100.0f;
	NavRemovalRadius = 150.0f;

	// Navigation Invoker 컴포넌트 생성 및 초기값 셋업.
	NavInvoker = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("NavInvoker"));
	// SetGenerationRadii 함수를 사용하여 생성 반경과 제거 반경 설정
	NavInvoker->SetGenerationRadii(NavGenerationRadius, NavRemovalRadius);

	// AI Modifier 테스트 관련 변수 초기화
	bIsSucceeded = false;
	bIsMoving = false;
	AcceptanceRadius = 50.0f; // 블루프린트에서 5.0으로 설정된 것으로 보이지만, 언리얼 단위로 변환

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	NoiseEmitterComponent = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("NoiseEmitterComponent"));

	// 스킬관련 값 초기화
	SilentMovementSkill.Duration = 10.0f;
	SilentMovementSkill.ManaCost = 10.0f;

	StealthSkill.Duration = 10.0f;
	StealthSkill.ManaCost = 10.0f;

	InvulnerabilitySkill.Duration = 10.0f;
	InvulnerabilitySkill.ManaCost = 0.0f;

	// 스텔스 모드 및 소음 관련 플래그 초기화
	bIsInStealthMode = false;
	bCanMakeNoise = true;

	// 플레이어 생명
	Lives = 3;
}

// AI Modifier 테스트 위해 BeginPlay() 추가
void ASCC_UEAILectureCharacter::BeginPlay()
{
	Super::BeginPlay();
	// AI 컨트롤러 찾기
	AIController = Cast<AAIController>(GetController());
	// AI 컨트롤러가 없으면 자동으로 생성하지 않음 (필요시 생성 코드 추가)
	if (AIController)
	{
		// 디버깅 에러 방지를 위해 언비인딩 코드 실행
		AIController->ReceiveMoveCompleted.RemoveDynamic(this, &ASCC_UEAILectureCharacter::OnMoveCompleted);
		// 이동 완료 이벤트 델리게이트 바인딩
		AIController->ReceiveMoveCompleted.AddDynamic(this, &ASCC_UEAILectureCharacter::OnMoveCompleted);

		// 타겟 포인트 찾기
		FindTargetPoints();
		StartMoving();
	}

	GetWorld()->GetTimerManager().SetTimer(ManaRegenTimerHandle, this, &ASCC_UEAILectureCharacter::RegenerateMana, ManaRegenInterval, true);

	GameMode = GetWorld()->GetAuthGameMode(); // 캐스팅 없이 기본 타입으로 받음

	// 원본 머티리얼 저장
	OriginalMaterials.Empty();
	USkeletalMeshComponent* MeshComp = GetMesh();
	if (MeshComp)
	{
		for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
		{
			UMaterialInterface* Material = MeshComp->GetMaterial(i);
			OriginalMaterials.Add(Material);

			// 로그 추가
			UE_LOG(LogTemplateCharacter, Warning, TEXT("Saved original material %d: %s"),
				i, Material ? *Material->GetName() : TEXT("null"));
		}

		// 총 머티리얼 개수 로그
		UE_LOG(LogTemplateCharacter, Warning, TEXT("Total original materials saved: %d"), OriginalMaterials.Num());
	}
}

void ASCC_UEAILectureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 스킬 타이머 업데이트
	if (SilentMovementSkill.bIsActive)
	{
		SilentMovementSkill.RemainingTime -= DeltaTime;
		if (SilentMovementSkill.RemainingTime <= 0.0f)
		{
			EndSilentMovement();
		}
	}

	if (StealthSkill.bIsActive)
	{
		StealthSkill.RemainingTime -= DeltaTime;
		if (StealthSkill.RemainingTime <= 0.0f)
		{
			EndStealth();
		}
	}

	if (InvulnerabilitySkill.bIsActive)
	{
		InvulnerabilitySkill.RemainingTime -= DeltaTime;
		if (InvulnerabilitySkill.RemainingTime <= 0.0f)
		{
			EndInvulnerability();
		}
	}

	// 뛸 때 소음 발생 (소리 제거 스킬이 활성화되지 않은 경우)
	if (!SilentMovementSkill.bIsActive && GetVelocity().Size() > 10.0f && GetCharacterMovement()->IsMovingOnGround())
	{
		float MovementNoise = DefaultMovementNoiseLoudness;
		MakeNoise(MovementNoise, GetActorLocation());
	}
}

//////////////////////////////////////////////////////////////////////////
// AI Modifier Texst 인풋 로직 구현 (Invoker로직에서 수정)

void ASCC_UEAILectureCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	else // Input Mapping Context가 없는 경우(AI인 경우) 컨트롤러 추가.
	{
		// 컨트롤러가 변경되었고 AI 컨트롤러인 경우
		AIController = Cast<AAIController>(Controller);
		if (AIController)
		{
			AIController->ReceiveMoveCompleted.AddDynamic(this, &ASCC_UEAILectureCharacter::OnMoveCompleted);
		}
	}
}

void ASCC_UEAILectureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	// Set up action bindings
	if (EnhancedInputComponent) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASCC_UEAILectureCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASCC_UEAILectureCharacter::Look);

		// Silent Movement Skill 
		if (SilentMovementAction)
		{
			EnhancedInputComponent->BindAction(SilentMovementAction, ETriggerEvent::Started, this, &ASCC_UEAILectureCharacter::ActivateSilentMovement);
		}

		// Stealth SKill
		if (StealthAction)
		{
			EnhancedInputComponent->BindAction(StealthAction, ETriggerEvent::Started, this, &ASCC_UEAILectureCharacter::ActivateStealth);
		}

		// Persuade SKill
		if (PersuadeAction)
		{
			EnhancedInputComponent->BindAction(PersuadeAction, ETriggerEvent::Started, this, &ASCC_UEAILectureCharacter::TryPersuade);
		}
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ASCC_UEAILectureCharacter::Jump()
{
	Super::Jump();
	UE_LOG(LogTemp, Warning, TEXT("Player Jump!##"));
	// 점프 시 노이즈 생성
	MakeNoise(3.0f, GetActorLocation());
}

void ASCC_UEAILectureCharacter::MakeNoise(float Loudness, FVector NoiseLocation)
{
	if (SilentMovementSkill.bIsActive)
	{
		return;
	}

	// NoiseEmitterComponent만 사용하여 소음 발생
	if (NoiseEmitterComponent)
	{
		NoiseEmitterComponent->MakeNoise(this, Loudness, NoiseLocation);
		// UE_LOG(LogTemp, Warning, TEXT("Noise created at %s with loudness %f"), *NoiseLocation.ToString(), Loudness);
	}
}

void ASCC_UEAILectureCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ASCC_UEAILectureCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

//////////////////////////////////////////////////////////////////////////
// AI Modifier 테스트용 Movement Logic 구현.

void ASCC_UEAILectureCharacter::FindTargetPoints()
{
	// 타겟 포인트가 설정되어 있지 않은 경우 자동으로 찾기
	if (!Target || !Target2)
	{
		TArray<AActor*> FoundTargets;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoundTargets);

		if (FoundTargets.Num() >= 2)
		{
			Target = FoundTargets[0];
			Target2 = FoundTargets[1];
			UE_LOG(LogTemplateCharacter, Display, TEXT("Found TargetPoints: %s and %s"),
				*Target->GetName(), *Target2->GetName());
		}
		else
		{
			// UE_LOG(LogTemplateCharacter, Warning, TEXT("Not enough TargetPoints found in the level, need at least 2!"));
		}
	}
}

void ASCC_UEAILectureCharacter::StartMoving()
{
	// 타겟 포인트를 찾고 이동 시작
	FindTargetPoints();
	MoveToTarget();
}

void ASCC_UEAILectureCharacter::MoveToTarget()
{
	if (!AIController)
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("AIController is not valid! Make sure the character is possessed by an AIController."));
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
			// UE_LOG(LogTemplateCharacter, Warning, TEXT("Failed to start movement to target!"));
			bIsMoving = false;
		}
		else
		{
			UE_LOG(LogTemplateCharacter, Display, TEXT("Moving to %s (IsSucceeded: %s)"),
				*SelectedTarget->GetName(), bIsSucceeded ? TEXT("True") : TEXT("False"));
		}
	}
	else
	{
		// UE_LOG(LogTemplateCharacter, Error, TEXT("Selected target is not valid! Make sure Target and Target2 are set."));
	}
}

void ASCC_UEAILectureCharacter::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	bIsMoving = false;

	// 이동 결과에 따라 IsSucceeded 값 토글
	if (Result == EPathFollowingResult::Success)
	{
		// 성공적으로 이동 완료됨
		bIsSucceeded = !bIsSucceeded;  // 값 토글
		UE_LOG(LogTemplateCharacter, Display, TEXT("Move completed successfully. IsSucceeded toggled to: %s"),
			bIsSucceeded ? TEXT("True") : TEXT("False"));

		// 지연 후 다음 이동 시작
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ASCC_UEAILectureCharacter::MoveToTarget, 0.5f, false);
	}
	else
	{
		// 이동 실패
		UE_LOG(LogTemplateCharacter, Warning, TEXT("Move failed with result: %d"), static_cast<int32>(Result));

		// 실패 시에도 다시 시도
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ASCC_UEAILectureCharacter::MoveToTarget, 1.0f, false);
	}
}

// 스킬 등 추가 코드

void ASCC_UEAILectureCharacter::RegenerateMana()
{
	CurrentMana = FMath::Min(CurrentMana + ManaRegenRate, MaxMana);
	// UE_LOG(LogTemp, Error, TEXT("CurrentMana is %f"), CurrentMana);
}

void ASCC_UEAILectureCharacter::ActivateSilentMovement()
{
	// 이미 활성화된 경우 중복 사용 방지
	if (SilentMovementSkill.bIsActive)
	{
		return;
	}
	// 마나가 충분한지 확인
	if (CurrentMana < SilentMovementSkill.ManaCost)
	{
		return;
	}

	// 마나 소모
	CurrentMana -= SilentMovementSkill.ManaCost;

	// 스킬 활성화
	SilentMovementSkill.bIsActive = true;
	SilentMovementSkill.RemainingTime = SilentMovementSkill.Duration;

	// 이동 속도 감소
	GetCharacterMovement()->MaxWalkSpeed = SlowWalkSpeed;

	// 소음 발생 불가 상태 설정
	bCanMakeNoise = false;

	UE_LOG(LogTemplateCharacter, Display, TEXT("Silent Movement Activated for %.1f s"), SilentMovementSkill.Duration);
}

void ASCC_UEAILectureCharacter::EndSilentMovement()
{
	if (!SilentMovementSkill.bIsActive)
	{
		return;
	}

	SilentMovementSkill.bIsActive = false;
	GetCharacterMovement()->MaxWalkSpeed = DefaultWalkSpeed;

	// 소음 발생 가능 상태로 복원
	bCanMakeNoise = true;

	UE_LOG(LogTemplateCharacter, Display, TEXT("Silent Movement ended"));
}

void ASCC_UEAILectureCharacter::ActivateStealth()
{
	// 이미 활성화된 경우 중복사용 방지
	if (StealthSkill.bIsActive)
	{
		return;
	}

	// 마나가 충분한지 확인
	if (CurrentMana < StealthSkill.ManaCost)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("You have not enough Mana"));
		return;
	}

	// 마나 소모
	CurrentMana -= StealthSkill.ManaCost;

	// 스킬 활성화
	StealthSkill.bIsActive = true;
	StealthSkill.RemainingTime = StealthSkill.Duration;

	// 스텔스 모드 플래그 활성화
	bIsInStealthMode = true;

	// 스텔스 효과 적용 (스텔스 머티리얼)
	USkeletalMeshComponent* MeshComp = GetMesh();
	if (MeshComp && StealthMaterial)
	{
		for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
		{
			UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(StealthMaterial, this); // StealthMaterial은 캐릭터 블루프린트 내 Player Skill 머티리얼에서 할당
			if (DynamicMaterial)
			{
				MeshComp->SetMaterial(i, DynamicMaterial);
			}
		}
	}

	UE_LOG(LogTemplateCharacter, Display, TEXT("Stealth activated for %.1f seconds"), StealthSkill.Duration);
}

void ASCC_UEAILectureCharacter::EndStealth()
{
	if (!StealthSkill.bIsActive)
	{
		return;
	}

	StealthSkill.bIsActive = false;

	// 스텔스 모드 플래그 비활성화
	bIsInStealthMode = false;

	// 원래 머티리얼로 복원
	USkeletalMeshComponent* MeshComp = GetMesh();
	if (MeshComp && OriginalMaterials.Num() > 0)
	{
		for (int32 i = 0; i < FMath::Min(MeshComp->GetNumMaterials(), OriginalMaterials.Num()); i++)
		{
			if (OriginalMaterials[i])
			{
				MeshComp->SetMaterial(i, OriginalMaterials[i]);
				UE_LOG(LogTemp, Warning, TEXT("CurrentMana is %f"), CurrentMana);
			}
		}
	}

	UE_LOG(LogTemplateCharacter, Display, TEXT("Stealth ended"));
}

// CapturedByAI_Implementation 등 인터페이스발 함수 구현
void ASCC_UEAILectureCharacter::CapturedByAI_Implementation()
{
	// AI 경찰에 의해 호출되는 함수.

	// 무적 상태이면 캡처 무시
	if (bIsInvulnerable)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("AI capture attempt ignored - Player is invulnerable"));
		return;
	}

	// 스텔스 상태이면 캡처 무시
	if (StealthSkill.bIsActive)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("AI capture attempt ignored - Player is in stealth"));
		return;
	}

	bIsCaptured = true;
	CaptureTime = GetWorld()->GetTimeSeconds();
	bIsInvulnerable = true; // 일시 무적처리.
	InvulnerabilitySkill.bIsActive = true;
	if (!bIsTimerSet) // 타이머 중복호출 방지를 위한 안전코드
	{
		bIsTimerSet = true;
		UE_LOG(LogTemplateCharacter, Display, TEXT("Player captured by AI! Use persuasion skill within %.1f seconds!"), PersuasionWindow);
		GetWorldTimerManager().SetTimer(PlayerCapturedTimerHandle, this, &ASCC_UEAILectureCharacter::PlayerCaptured, 5.0f, false);
	}
}

// 설득 성공여부 확인 후 플레이어 생명력 유지/감소 로직 작동
void ASCC_UEAILectureCharacter::PlayerCaptured()
{
	bIsTimerSet = false; // 타이머 셋 false로 전환
	if (!bIsSucceededPersuasion)
	{
		// 플레이어 캡처 처리 (게임플레이 효과, UI 표시 등)
		// 게임모드 인터페이스 확인 및 호출
		if (GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()))
		{
			// 플레이어 캡처 보고
			IGameRulesInterface::Execute_ReportPlayerCapture(GameMode, this, nullptr);

			// 현재 목숨 수 가져오기 및 로그 출력
			int32 CurrentLives = IGameRulesInterface::Execute_ReportCurrentLives(GameMode);
			UE_LOG(LogTemp, Error, TEXT("Player Captured. The remaining live(s) is %d"), CurrentLives);

			bIsInvulnerable = false; // 일시 무적처리.
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("GameMode is not valid for interface calls"));
		}

		/*
		Lives--;
		UE_LOG(LogTemplateCharacter, Display, TEXT("You just loose a life. Remaining live(s) is %d"), Lives);
		bIsTimerSet = false;
		// 게임오버 확인
		if (Lives <= 3)
		{
			GameOver();
		}
		*/
		GetWorldTimerManager().SetTimer(CapturedTimerHandle, this, &ASCC_UEAILectureCharacter::EndInvulnerability, 3.0f, false);
	}
}

void ASCC_UEAILectureCharacter::TryPersuade()
{
	// 잡히지 않은 상태면 설득 불가
	if (!bIsCaptured)
	{
		return;
	}

	// 설득 가능 시간이 지났는지 확인
	float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - CaptureTime > PersuasionWindow) // ex) 잡힌 시점이 100(Capture TIme)초라고 가정하면, 현재시점(CurrentTIme)이 105초 이하여야 통과.(5초 이내 설득시도해야함)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("Persuasion failed - Too late!"));
		return;
	}

	// 설득 성공 확률에 따라 성공 여부 결정
	bool bPersuasionSuccess = FMath::FRand() <= PersuasionChance;

	if (bPersuasionSuccess && CurrentMana >= 20)
	{
		// 설득 성공 - 10초간 무적 상태 부여
		bIsCaptured = false;
		bIsInvulnerable = true;
		bIsSucceededPersuasion = true;
		InvulnerabilitySkill.bIsActive = true;
		InvulnerabilitySkill.RemainingTime = InvulnerabilitySkill.RemainingTime + InvulnerabilityDuration; // 관대하게 누적시간+추가시간 공식 사용
		CurrentMana = CurrentMana / 2;

		UE_LOG(LogTemplateCharacter, Display, TEXT("Persuasion successful! Invulnerability granted for %.1f seconds"), InvulnerabilityDuration);
		return;
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("Persuasion failed!"));
		return;
	}
}

void ASCC_UEAILectureCharacter::EndInvulnerability()
{
	bIsInvulnerable = false;
	InvulnerabilitySkill.bIsActive = false;
	bIsSucceededPersuasion = false;

	UE_LOG(LogTemplateCharacter, Display, TEXT("Invulnerability ended"));
}

// 인터페이스 메서드 구현

bool ASCC_UEAILectureCharacter::CanBeDetected_Implementation() const
{
	// 스텔스 상태이거나 무적 상태이면 감지 불가
	return !(StealthSkill.bIsActive || bIsInvulnerable || bIsInStealthMode);
}

bool ASCC_UEAILectureCharacter::CanMakeNoise_Implementation() const
{
	// 소음 발생 가능 상태일 때만 소음 감지 가능
	return bCanMakeNoise && !SilentMovementSkill.bIsActive;
}

// 게임오버

void ASCC_UEAILectureCharacter::GameOver()
{
	if (Lives <= 0)
	{
		// 플레이어 제어 및 충돌 비활성화
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);

		// 플레이어 입력 비활성화
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			DisableInput(PC);
		}
	}
}