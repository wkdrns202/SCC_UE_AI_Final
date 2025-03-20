#include "BaseItem.h"
#include "SCC_UEAI_Lecture/SCC_UEAI_LectureCharacter.h"
#include "DetectableInterface.h"
#include "GameFramework/GameModeBase.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// 컴포넌트 생성
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	RootComponent = CollisionSphere;

	// 충돌 설정
	CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	CollisionSphere->SetSphereRadius(50.0f);

	// 메시 컴포넌트 생성
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);

	// 기본 아이템 타입

	ItemType = 0; // GoldBar일 경우 1, 일반 코인일 경우 0 부여.
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();

	// 오버랩 이벤트 바인딩
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
	// 플레이어 캐릭터인지 확인
	ASCC_UEAILectureCharacter* PlayerCharacter = Cast<ASCC_UEAILectureCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		// 게임모드 찾기
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

		// 게임모드가 GameRulesinterface를 구현했는지 확인
		if (GameMode)
		{
			// 인터페이스 포인터로 변환
			IGameRulesInterface* GameRulesInterface = Cast<IGameRulesInterface>(GameMode);
			if (GameRulesInterface)
			{
				// 아이템 획득 소식 및 타입을 전달
				GameRulesInterface->Execute_ReportGetCoin(GameMode, ItemType);
				UE_LOG(LogTemp, Warning, (TEXT("Item Collected and reported")));
			}
		}

		// 딜레이 후 액터 제거
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

