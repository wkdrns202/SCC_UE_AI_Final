#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BaseItem.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 충돌감지 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* CollisionSphere;

	// 아이템 메시 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* ItemMesh;

	// 플레이어와 충돌시 호출되는 함수
	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	// 아이템 타입 식별을 위한 열거형
	UPROPERTY(EditAnywhere, BlueprintREadWrite, Category = "Item")
	int32 ItemType;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 아이템 타입 반환 함수
	UFUNCTION(BlueprintCallable, Category = "Item")
	int32 GetItemType() const { return ItemType; }

};
