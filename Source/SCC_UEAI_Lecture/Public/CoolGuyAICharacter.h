#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CoolGuyAIController.h"
#include "CoolGuyAICharacter.generated.h"

UCLASS()
class SCC_UEAI_LECTURE_API ACoolGuyAICharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ACoolGuyAICharacter();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    //// �Ʒ� �ڵ� �߰�

    // ��Ʈ�� ����Ʈ ���� (��Ʈ�ѷ����� ȣ��)
    void SetPatrolPoints(const TArray<FVector>& Points);

private:
    // ���� ��ǥ ��ġ
    FVector CurrentTargetLocation;

    // ��Ʈ�� ����Ʈ �迭
    TArray<FVector> PatrolPoints;

    // ���� �ε���
    int32 CurrentPatrolIndex = 0;

    // ��ǥ ������ �����ߴ��� Ȯ���ϴ� �Լ�
    bool IsCloseToTarget(float AcceptableDistance = 100.0f);

    // ���� ��Ʈ�� ����Ʈ�� �̵�
    void MoveToNextPatrolPoint();

    // AI ��Ʈ�ѷ� ����
    ACoolGuyAIController* AIController;

    // �������� ������Ʈ ����
    UBlackboardComponent* BlackboardComp;
};