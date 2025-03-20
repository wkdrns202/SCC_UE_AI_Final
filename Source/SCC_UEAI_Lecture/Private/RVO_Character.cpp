#include "RVO_Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"

// Sets default values
ARVO_Character::ARVO_Character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// RVO ȸ�� �ý��� Ȱ��ȭ
	UCharacterMovementComponent* MovementComponent = GetCharacterMovement();
	if (MovementComponent)
	{
		MovementComponent->bUseRVOAvoidance = true;
		MovementComponent->AvoidanceConsiderationRadius = AvoidanceRadius;
		MovementComponent->AvoidanceWeight = 0.5f;
	}
}

// Called when the game starts or when spawned
void ARVO_Character::BeginPlay()
{
	Super::BeginPlay();

	// AI ��Ʈ�ѷ� ���� ���
	AIController = Cast<AAIController>(GetController());

	// AI ��Ʈ�ѷ��� ������ �α� ���
	if (!AIController)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is not controlled by an AIController. Movement functions will not work."), *GetName());
	}
	else if (TargetActor)
	{
		// Ÿ�� ���Ͱ� �����Ǿ� ������ �ڵ����� �̵� ����
		MoveToTarget();
	}
}

// Called every frame
void ARVO_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ARVO_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ARVO_Character::MoveToTarget()
{
	if (!AIController)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveToTarget failed: No AI Controller for %s"), *GetName());
		return;
	}

	if (!TargetActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveToTarget failed: No Target Actor set for %s"), *GetName());
		return;
	}
	
	// Ÿ�� ���͸� ���� �̵�
	AIController->MoveToActor(
		TargetActor,    // ��ǥ ����
		50.0f,          // ���� ���� �ݰ�
		true,           // �浹 ������ ��ġ�� �������� ����
		true,           // ��� Ž�� ���
		false           // �������� �׺���̼� �޽ÿ� ����(Projection)���� ����
	);
	
	UE_LOG(LogTemp, Display, TEXT("%s moving to target: %s"),
		*GetName(), *TargetActor->GetName());
}

void ARVO_Character::SetRVOAvoidanceEnabled(bool bEnable)
{
	UCharacterMovementComponent* MovementComponent = GetCharacterMovement();
	if (MovementComponent)
	{
		MovementComponent->bUseRVOAvoidance = bEnable;
	}
}