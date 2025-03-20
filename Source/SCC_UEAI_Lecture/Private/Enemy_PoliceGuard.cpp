#include "Enemy_PoliceGuard.h"


AEnemy_PoliceGuard::AEnemy_PoliceGuard()
{
	PrimaryActorTick.bCanEverTick = true;
    Stamina = 1000;
    StaminaRecoveryRate = 100;
    StaminaDrainRate = 50;
    MaxStamina = 1000;
    age = 25;

}

void AEnemy_PoliceGuard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // �Ϲ� ������ �� ���¹̳� ȸ��
    if (CurrentAlertLevel == EAlertLevel::Normal)
    {
        IsResting = true;
        Stamina += (StaminaRecoveryRate * DeltaTime / (age * 0.04)); // ���̰� ���� ���� ���� ȸ���Ǵ� ���� (������ 4%, 25�� ���� 1��)
        Stamina = FMath::Min(Stamina, MaxStamina); // �ִ밪 ����
    }
    // �߰� ���� �� ���¹̳� �Ҹ�
    else if (CurrentAlertLevel == EAlertLevel::Pursuit && !IsResting)
    {
        Stamina -= (StaminaDrainRate * DeltaTime * (age * 0.04)); // ���̰� ���� ���� �Ҹ��� �������� ���� (������ 4%, 25�� ���� 1��)
        Stamina = FMath::Max(Stamina, 0.0f); // �ּҰ� ����

        // ���¹̳��� �Ӱ谪 ���Ϸ� �������� �ڵ����� �޽� ���·� ��ȯ
        if (Stamina < 10.0f)
        {
            IsResting = true;
            UE_LOG(LogTemp, Warning, TEXT("PoliceGuard is exhausted! can't pursue Player anymore."));
            SetAlertLevel(EAlertLevel::Alert); // ��� ���·� ��ȯ
        }
    }
    // �޽� ���������� �߰� ���� ������ ���� ���¹̳� ������ ȸ��
    else if (IsResting)
    {
        Stamina += (StaminaRecoveryRate * 0.5f * DeltaTime); // �޽� �� ȸ�� �ӵ��� �Ϲ� ������ ����
        Stamina = FMath::Min(Stamina, MaxStamina);

        // ����� ȸ�������� �ٽ� �ൿ ����
        if (Stamina >= 30.0f) // Stamina�� 30 �̻� ȸ���Ǹ� �ٽ� ������ �� ����.
        {
            IsResting = false;
        }
    }
}
