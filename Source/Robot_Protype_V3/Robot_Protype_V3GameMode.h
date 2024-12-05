#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Robot_Protype_V3GameMode.generated.h"

UCLASS()
class ROBOT_PROTYPE_V3_API ARobot_Protype_V3GameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ARobot_Protype_V3GameMode();

protected:
    // Override BeginPlay event
    virtual void BeginPlay() override;
};
