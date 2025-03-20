#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPC_AIController.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API ANPC_AIController : public AAIController
{
    GENERATED_BODY()

public:
    ANPC_AIController();

    UPROPERTY(EditAnywhere, Category = "AI")
    UBehaviorTree* BehaviorTree;

    UPROPERTY(BlueprintReadWrite, Category = "AI")
    UBlackboardComponent* BlackboardComponent;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    void InitializePatrolPoint();
    void DestroyLogic();
    virtual void OnPossess(APawn* InPawn) override;
    bool bPatrolPointReady;
    FVector FoundTargetPoint;  // 포인터가 아닌 값 타입으로 선언
    bool bFoundTargetPoint;    // 타겟 포인트를 찾았는지 여부를 저장

private:
    static const FName SearchLocationKey;
};