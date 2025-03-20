#include "BaseItem.h"
#include "SCC_UEAI_Lecture/SCC_UEAI_LectureCharacter.h"
#include "DetectableInterface.h"
#include "GameFramework/GameModeBase.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// ������Ʈ ����
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	RootComponent = CollisionSphere;

	// �浹 ����
	CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	CollisionSphere->SetSphereRadius(50.0f);

	// �޽� ������Ʈ ����
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);

	// �⺻ ������ Ÿ��

	ItemType = 0; // GoldBar�� ��� 1, �Ϲ� ������ ��� 0 �ο�.
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();

	// ������ �̺�Ʈ ���ε�
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::OnOverlapBegin);


	
}

void ABaseItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("#1 Collect Trigger Event Enabled"));
	// �÷��̾� ĳ�������� Ȯ��
	ASCC_UEAILectureCharacter* PlayerCharacter = Cast<ASCC_UEAILectureCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		// ���Ӹ�� ã��
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

		// ���Ӹ�尡 GameRulesinterface�� �����ߴ��� Ȯ��
		if (GameMode)
		{
			// �������̽� �����ͷ� ��ȯ
			IGameRulesInterface* GameRulesInterface = Cast<IGameRulesInterface>(GameMode);
			if (GameRulesInterface)
			{
				// ������ ȹ�� �ҽ� �� Ÿ���� ����
				GameRulesInterface->Execute_ReportGetCoin(GameMode, ItemType);
				UE_LOG(LogTemp, Warning, (TEXT("Item Collected and reported")));
			}
		}

		// ������ �� ���� ����
		FTimerHandle DestroyTimerHandle;
		GetWorldTimerManager().SetTimer(DestroyTimerHandle, [this]() {
			Destroy();
			}, 0.5f, false);

	}

}

// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

