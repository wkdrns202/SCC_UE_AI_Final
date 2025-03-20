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

    // 일반 상태일 때 스태미나 회복
    if (CurrentAlertLevel == EAlertLevel::Normal)
    {
        IsResting = true;
        Stamina += (StaminaRecoveryRate * DeltaTime / (age * 0.04)); // 나이가 적을 수록 빨리 회복되는 로직 (나이의 4%, 25세 기준 1배)
        Stamina = FMath::Min(Stamina, MaxStamina); // 최대값 제한
    }
    // 추격 중일 때 스태미나 소모
    else if (CurrentAlertLevel == EAlertLevel::Pursuit && !IsResting)
    {
        Stamina -= (StaminaDrainRate * DeltaTime * (age * 0.04)); // 나이가 많을 수록 소모량이 많아지는 로직 (나이의 4%, 25세 기준 1배)
        Stamina = FMath::Max(Stamina, 0.0f); // 최소값 제한

        // 스태미나가 임계값 이하로 떨어지면 자동으로 휴식 상태로 전환
        if (Stamina < 10.0f)
        {
            IsResting = true;
            UE_LOG(LogTemp, Warning, TEXT("PoliceGuard is exhausted! can't pursue Player anymore."));
            SetAlertLevel(EAlertLevel::Alert); // 경계 상태로 전환
        }
    }
    // 휴식 상태이지만 추격 외의 상태일 때도 스태미나 서서히 회복
    else if (IsResting)
    {
        Stamina += (StaminaRecoveryRate * 0.5f * DeltaTime); // 휴식 시 회복 속도는 일반 상태의 절반
        Stamina = FMath::Min(Stamina, MaxStamina);

        // 충분히 회복됐으면 다시 행동 가능
        if (Stamina >= 30.0f) // Stamina가 30 이상 회복되면 다시 움직일 수 있음.
        {
            IsResting = false;
        }
    }
}
