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
    FVector FoundTargetPoint;  // �����Ͱ� �ƴ� �� Ÿ������ ����
    bool bFoundTargetPoint;    // Ÿ�� ����Ʈ�� ã�Ҵ��� ���θ� ����

private:
    static const FName SearchLocationKey;
};