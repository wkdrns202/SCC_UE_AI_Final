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

	// �浹���� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* CollisionSphere;

	// ������ �޽� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* ItemMesh;

	// �÷��̾�� �浹�� ȣ��Ǵ� �Լ�
	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	// ������ Ÿ�� �ĺ��� ���� ������
	UPROPERTY(EditAnywhere, BlueprintREadWrite, Category = "Item")
	int32 ItemType;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ������ Ÿ�� ��ȯ �Լ�
	UFUNCTION(BlueprintCallable, Category = "Item")
	int32 GetItemType() const { return ItemType; }

};
