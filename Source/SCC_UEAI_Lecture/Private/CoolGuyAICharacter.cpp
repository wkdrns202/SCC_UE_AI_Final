#include "CoolGuyAICharacter.h"


// Sets default values
ACoolGuyAICharacter::ACoolGuyAICharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // AI 노드 자동 설정
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void ACoolGuyAICharacter::BeginPlay()
{
    Super::BeginPlay();

    // AI 컨트롤러 및 블랙보드 초기화

    AIController = Cast<ACoolGuyAIController>(GetController());

    if (AIController)
    {
        // Behavior Tree와 Blackboard 할당 실패 상태를 null 반환받음.
        BlackboardComp = AIController->GetBlackboardComponent();
        UE_LOG(LogTemp, Warning, TEXT("블랙보드 초기화. The Name is : %s"), *BlackboardComp->GetName());
    }
}

// Called every frame
void ACoolGuyAICharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);


    // Patrol Points가 준비되었을 때 bool 변수로 알림 받도록 설정.
    if (AIController->bPatrolPointsReady)
    {
        // blackboard에서 targetlocation 받아오기
        CurrentTargetLocation = BlackboardComp->GetValueAsVector("PatrolLocation");
        PatrolPoints = AIController->PatrolPoints;
        AIController->bPatrolPointsReady = false; // 한 번 업데이트 이후 계속 반복되지 않도록 false 부여.
    }

    UE_LOG(LogTemp, Warning, TEXT("Current Location: %s"), *GetActorLocation().ToString());
    UE_LOG(LogTemp, Warning, TEXT("Target Location: %s"), *CurrentTargetLocation.ToString());


    // 목표 지점에 도달했는지 확인
    if (PatrolPoints.Num() > 0 && IsCloseToTarget())
    {
        // 다음 패트롤 포인트로 이동
        UE_LOG(LogTemp, Warning, TEXT("MoveToNextPatrolPoint Called at Tick"));
        MoveToNextPatrolPoint();
    }
}

// 패트롤 포인트 설정용 함수추가
void ACoolGuyAICharacter::SetPatrolPoints(const TArray<FVector>& Points)
{
    PatrolPoints = Points;

    // 첫 번째 패트롤 포인트 설정
    if (PatrolPoints.Num() > 0)
    {


        // AI 컨트롤러의 BeginPlay에 의해 BlackboardComp가 초기화되었으므로 아래와 같이 설정.
        if (BlackboardComp)
        {
            UE_LOG(LogTemp, Warning, TEXT("### PatrolLocation 업데이트"));
            BlackboardComp->SetValueAsVector("PatrolLocation", CurrentTargetLocation);
        }
    }
}

// 목표 지점 도달 확인 함수 추가.
bool ACoolGuyAICharacter::IsCloseToTarget(float AcceptableDistance)
{
    // 현재 위치와 목표 위치 사이 거리 계산
    float Distance = FVector::Dist(GetActorLocation(), CurrentTargetLocation);
    UE_LOG(LogTemp, Warning, TEXT("Distance: %f, Acceptable Distance: 100.0f"), Distance);
    // 허용되는 최대한 거리(AcceptableDistance)보다 가까우면 true 반환
    return Distance <= AcceptableDistance;
}

// 다음 패트롤 포인트로 이동함수 추가.
void ACoolGuyAICharacter::MoveToNextPatrolPoint()
{
    if (PatrolPoints.Num() == 0) return;
    UE_LOG(LogTemp, Warning, TEXT("MoveToNextPatrolPoint Called"));
    // 다음 인덱스 선택 (순환식 이동)
    CurrentPatrolIndex = (CurrentPatrolIndex + 1) % PatrolPoints.Num();
    //UE_LOG(LogTemp, Warning, TEXT("PatrolPoints Count is : %d"), PatrolPoints.Num());
    // 새 목표 위치 설정
    CurrentTargetLocation = PatrolPoints[CurrentPatrolIndex];

    // 블랙보드에 새 위치 업데이트
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsVector("PatrolLocation", CurrentTargetLocation);
        UE_LOG(LogTemp, Warning, TEXT("PatrolLocation Updated"));
    }
}