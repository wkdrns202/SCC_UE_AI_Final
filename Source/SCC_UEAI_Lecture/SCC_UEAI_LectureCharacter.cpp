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
#include "AI_DetectionGuard.h" // 챕터4 과제
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

	// �׺���̼� Invoker ���� ���� �ʱ�ȭ
	NavGenerationRadius = 100.0f;
	NavRemovalRadius = 150.0f;

	// Navigation Invoker ������Ʈ ���� �� �ʱⰪ �¾�.
	NavInvoker = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("NavInvoker"));
	// SetGenerationRadii �Լ��� ����Ͽ� ���� �ݰ�� ���� �ݰ� ����
	NavInvoker->SetGenerationRadii(NavGenerationRadius, NavRemovalRadius);

	// AI Modifier �׽�Ʈ ���� ���� �ʱ�ȭ
	bIsSucceeded = false;
	bIsMoving = false;
	AcceptanceRadius = 50.0f; // �������Ʈ���� 5.0���� ������ ������ ��������, �𸮾� ������ ��ȯ

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	NoiseEmitterComponent = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("NoiseEmitterComponent"));

	// ��ų���� �� �ʱ�ȭ
	SilentMovementSkill.Duration = 10.0f;
	SilentMovementSkill.ManaCost = 10.0f;

	StealthSkill.Duration = 10.0f;
	StealthSkill.ManaCost = 10.0f;

	InvulnerabilitySkill.Duration = 10.0f;
	InvulnerabilitySkill.ManaCost = 0.0f;

	// ���ڽ� ��� �� ���� ���� �÷��� �ʱ�ȭ
	bIsInStealthMode = false;
	bCanMakeNoise = true;

	// �÷��̾� ����
	Lives = 3;
}

// AI Modifier �׽�Ʈ ���� BeginPlay() �߰�
void ASCC_UEAILectureCharacter::BeginPlay()
{
	Super::BeginPlay();
	// AI ��Ʈ�ѷ� ã��
	AIController = Cast<AAIController>(GetController());
	// AI ��Ʈ�ѷ��� ������ �ڵ����� �������� ���� (�ʿ�� ���� �ڵ� �߰�)
	if (AIController)
	{
		// ����� ���� ������ ���� ����ε� �ڵ� ����
		AIController->ReceiveMoveCompleted.RemoveDynamic(this, &ASCC_UEAILectureCharacter::OnMoveCompleted);
		// �̵� �Ϸ� �̺�Ʈ ��������Ʈ ���ε�
		AIController->ReceiveMoveCompleted.AddDynamic(this, &ASCC_UEAILectureCharacter::OnMoveCompleted);

		// Ÿ�� ����Ʈ ã��
		FindTargetPoints();
		StartMoving();
	}

	GetWorld()->GetTimerManager().SetTimer(ManaRegenTimerHandle, this, &ASCC_UEAILectureCharacter::RegenerateMana, ManaRegenInterval, true);

	GameMode = GetWorld()->GetAuthGameMode(); // ĳ���� ���� �⺻ Ÿ������ ����

	// ���� ��Ƽ���� ����
	OriginalMaterials.Empty();
	USkeletalMeshComponent* MeshComp = GetMesh();
	if (MeshComp)
	{
		for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
		{
			UMaterialInterface* Material = MeshComp->GetMaterial(i);
			OriginalMaterials.Add(Material);

			// �α� �߰�
			UE_LOG(LogTemplateCharacter, Warning, TEXT("Saved original material %d: %s"),
				i, Material ? *Material->GetName() : TEXT("null"));
		}

		// �� ��Ƽ���� ���� �α�
		UE_LOG(LogTemplateCharacter, Warning, TEXT("Total original materials saved: %d"), OriginalMaterials.Num());
	}
}

void ASCC_UEAILectureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ��ų Ÿ�̸� ������Ʈ
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

	// �� �� ���� �߻� (�Ҹ� ���� ��ų�� Ȱ��ȭ���� ���� ���)
	if (!SilentMovementSkill.bIsActive && GetVelocity().Size() > 10.0f && GetCharacterMovement()->IsMovingOnGround())
	{
		float MovementNoise = DefaultMovementNoiseLoudness;
		MakeNoise(MovementNoise, GetActorLocation());
	}
}

//////////////////////////////////////////////////////////////////////////
// AI Modifier Texst ��ǲ ���� ���� (Invoker�������� ����)

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
	else // Input Mapping Context�� ���� ���(AI�� ���) ��Ʈ�ѷ� �߰�.
	{
		// ��Ʈ�ѷ��� ����Ǿ��� AI ��Ʈ�ѷ��� ���
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
	// ���� �� ������ ����
	MakeNoise(3.0f, GetActorLocation());
}

void ASCC_UEAILectureCharacter::MakeNoise(float Loudness, FVector NoiseLocation)
{
	if (SilentMovementSkill.bIsActive)
	{
		return;
	}

	// NoiseEmitterComponent�� ����Ͽ� ���� �߻�
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
// AI Modifier �׽�Ʈ�� Movement Logic ����.

void ASCC_UEAILectureCharacter::FindTargetPoints()
{
	// Ÿ�� ����Ʈ�� �����Ǿ� ���� ���� ��� �ڵ����� ã��
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
	// Ÿ�� ����Ʈ�� ã�� �̵� ����
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

	// �̵� ����� ���� IsSucceeded �� ���
	if (Result == EPathFollowingResult::Success)
	{
		// ���������� �̵� �Ϸ��
		bIsSucceeded = !bIsSucceeded;  // �� ���
		UE_LOG(LogTemplateCharacter, Display, TEXT("Move completed successfully. IsSucceeded toggled to: %s"),
			bIsSucceeded ? TEXT("True") : TEXT("False"));

		// ���� �� ���� �̵� ����
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ASCC_UEAILectureCharacter::MoveToTarget, 0.5f, false);
	}
	else
	{
		// �̵� ����
		UE_LOG(LogTemplateCharacter, Warning, TEXT("Move failed with result: %d"), static_cast<int32>(Result));

		// ���� �ÿ��� �ٽ� �õ�
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ASCC_UEAILectureCharacter::MoveToTarget, 1.0f, false);
	}
}

// ��ų �� �߰� �ڵ�

void ASCC_UEAILectureCharacter::RegenerateMana()
{
	CurrentMana = FMath::Min(CurrentMana + ManaRegenRate, MaxMana);
	// UE_LOG(LogTemp, Error, TEXT("CurrentMana is %f"), CurrentMana);
}

void ASCC_UEAILectureCharacter::ActivateSilentMovement()
{
	// �̹� Ȱ��ȭ�� ��� �ߺ� ��� ����
	if (SilentMovementSkill.bIsActive)
	{
		return;
	}
	// ������ ������� Ȯ��
	if (CurrentMana < SilentMovementSkill.ManaCost)
	{
		return;
	}

	// ���� �Ҹ�
	CurrentMana -= SilentMovementSkill.ManaCost;

	// ��ų Ȱ��ȭ
	SilentMovementSkill.bIsActive = true;
	SilentMovementSkill.RemainingTime = SilentMovementSkill.Duration;

	// �̵� �ӵ� ����
	GetCharacterMovement()->MaxWalkSpeed = SlowWalkSpeed;

	// ���� �߻� �Ұ� ���� ����
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

	// ���� �߻� ���� ���·� ����
	bCanMakeNoise = true;

	UE_LOG(LogTemplateCharacter, Display, TEXT("Silent Movement ended"));
}

void ASCC_UEAILectureCharacter::ActivateStealth()
{
	// �̹� Ȱ��ȭ�� ��� �ߺ���� ����
	if (StealthSkill.bIsActive)
	{
		return;
	}

	// ������ ������� Ȯ��
	if (CurrentMana < StealthSkill.ManaCost)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("You have not enough Mana"));
		return;
	}

	// ���� �Ҹ�
	CurrentMana -= StealthSkill.ManaCost;

	// ��ų Ȱ��ȭ
	StealthSkill.bIsActive = true;
	StealthSkill.RemainingTime = StealthSkill.Duration;

	// ���ڽ� ��� �÷��� Ȱ��ȭ
	bIsInStealthMode = true;

	// ���ڽ� ȿ�� ���� (���ڽ� ��Ƽ����)
	USkeletalMeshComponent* MeshComp = GetMesh();
	if (MeshComp && StealthMaterial)
	{
		for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
		{
			UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(StealthMaterial, this); // StealthMaterial�� ĳ���� �������Ʈ �� Player Skill ��Ƽ���󿡼� �Ҵ�
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

	// ���ڽ� ��� �÷��� ��Ȱ��ȭ
	bIsInStealthMode = false;

	// ���� ��Ƽ����� ����
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

// CapturedByAI_Implementation �� �������̽��� �Լ� ����
void ASCC_UEAILectureCharacter::CapturedByAI_Implementation()
{
	// AI ������ ���� ȣ��Ǵ� �Լ�.

	// ���� �����̸� ĸó ����
	if (bIsInvulnerable)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("AI capture attempt ignored - Player is invulnerable"));
		return;
	}

	// ���ڽ� �����̸� ĸó ����
	if (StealthSkill.bIsActive)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("AI capture attempt ignored - Player is in stealth"));
		return;
	}

	bIsCaptured = true;
	CaptureTime = GetWorld()->GetTimeSeconds();
	bIsInvulnerable = true; // �Ͻ� ����ó��.
	InvulnerabilitySkill.bIsActive = true;
	if (!bIsTimerSet) // Ÿ�̸� �ߺ�ȣ�� ������ ���� �����ڵ�
	{
		bIsTimerSet = true;
		UE_LOG(LogTemplateCharacter, Display, TEXT("Player captured by AI! Use persuasion skill within %.1f seconds!"), PersuasionWindow);
		GetWorldTimerManager().SetTimer(PlayerCapturedTimerHandle, this, &ASCC_UEAILectureCharacter::PlayerCaptured, 5.0f, false);
	}
}

// ���� �������� Ȯ�� �� �÷��̾� ����� ����/���� ���� �۵�
void ASCC_UEAILectureCharacter::PlayerCaptured()
{
	bIsTimerSet = false; // Ÿ�̸� �� false�� ��ȯ
	if (!bIsSucceededPersuasion)
	{
		// �÷��̾� ĸó ó�� (�����÷��� ȿ��, UI ǥ�� ��)
		// ���Ӹ�� �������̽� Ȯ�� �� ȣ��
		if (GameMode->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()))
		{
			// �÷��̾� ĸó ����
			IGameRulesInterface::Execute_ReportPlayerCapture(GameMode, this, nullptr);

			// ���� ��� �� �������� �� �α� ���
			int32 CurrentLives = IGameRulesInterface::Execute_ReportCurrentLives(GameMode);
			UE_LOG(LogTemp, Error, TEXT("Player Captured. The remaining live(s) is %d"), CurrentLives);

			bIsInvulnerable = false; // �Ͻ� ����ó��.
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("GameMode is not valid for interface calls"));
		}

		/*
		Lives--;
		UE_LOG(LogTemplateCharacter, Display, TEXT("You just loose a life. Remaining live(s) is %d"), Lives);
		bIsTimerSet = false;
		// ���ӿ��� Ȯ��
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
	// ������ ���� ���¸� ���� �Ұ�
	if (!bIsCaptured)
	{
		return;
	}

	// ���� ���� �ð��� �������� Ȯ��
	float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - CaptureTime > PersuasionWindow) // ex) ���� ������ 100(Capture TIme)�ʶ�� �����ϸ�, �������(CurrentTIme)�� 105�� ���Ͽ��� ���.(5�� �̳� ����õ��ؾ���)
	{
		UE_LOG(LogTemplateCharacter, Display, TEXT("Persuasion failed - Too late!"));
		return;
	}

	// ���� ���� Ȯ���� ���� ���� ���� ����
	bool bPersuasionSuccess = FMath::FRand() <= PersuasionChance;

	if (bPersuasionSuccess && CurrentMana >= 20)
	{
		// ���� ���� - 10�ʰ� ���� ���� �ο�
		bIsCaptured = false;
		bIsInvulnerable = true;
		bIsSucceededPersuasion = true;
		InvulnerabilitySkill.bIsActive = true;
		InvulnerabilitySkill.RemainingTime = InvulnerabilitySkill.RemainingTime + InvulnerabilityDuration; // �����ϰ� �����ð�+�߰��ð� ���� ���
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

// �������̽� �޼��� ����

bool ASCC_UEAILectureCharacter::CanBeDetected_Implementation() const
{
	// ���ڽ� �����̰ų� ���� �����̸� ���� �Ұ�
	return !(StealthSkill.bIsActive || bIsInvulnerable || bIsInStealthMode);
}

bool ASCC_UEAILectureCharacter::CanMakeNoise_Implementation() const
{
	// ���� �߻� ���� ������ ���� ���� ���� ����
	return bCanMakeNoise && !SilentMovementSkill.bIsActive;
}

// ���ӿ���

void ASCC_UEAILectureCharacter::GameOver()
{
	if (Lives <= 0)
	{
		// �÷��̾� ���� �� �浹 ��Ȱ��ȭ
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);

		// �÷��̾� �Է� ��Ȱ��ȭ
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			DisableInput(PC);
		}
	}
}


// 키 입력 함수를 PlayerCharacter에 추가할 코드
// 챕터 3 과제

void ASCC_UEAILectureCharacter::StopAIDetection()
{
    // 주변 AI 찾기
    TArray<AActor*> Guards;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAI_DetectionGuard::StaticClass(), Guards);

    for (AActor* Actor : Guards)
    {
        AAI_DetectionGuard* Guard = Cast<AAI_DetectionGuard>(Actor);
        if (Guard)
        {
            // 일정 거리(예: 300유닛) 이내의 AI만 영향 받음
            float Distance = FVector::Dist(GetActorLocation(), Guard->GetActorLocation());
            if (Distance <= 300.0f)
            {
                Guard->StopChasing();

                // 디버그 정보 표시
                UE_LOG(LogTemp, Warning, TEXT("Player stopped AI detection for %s"), *Guard->GetName());

                // 효과 표시 (원한다면)
                if (GEngine)
                {
                    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,
                        FString::Printf(TEXT("Stopped %s from chasing!"), *Guard->GetName()));
                }
            }
        }
    }
}
