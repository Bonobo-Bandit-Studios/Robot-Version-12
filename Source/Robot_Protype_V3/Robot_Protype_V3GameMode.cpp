#include "Robot_Protype_V3GameMode.h"
#include "Robot_Protype_V3Character.h"
#include "UObject/ConstructorHelpers.h"
#include "EngineUtils.h"

ARobot_Protype_V3GameMode::ARobot_Protype_V3GameMode()
{
    // Set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
   
}

void ARobot_Protype_V3GameMode::BeginPlay()
{
    Super::BeginPlay();

   
}
