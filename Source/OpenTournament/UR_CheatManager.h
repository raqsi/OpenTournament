// Copyright (c) 2019-2020 Open Tournament Project, All Rights Reserved.

/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"

#include "UR_CheatManager.generated.h"

/////////////////////////////////////////////////////////////////////////////////////////////////

class AUR_Weapon;

/////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Cheat Manager
 */
UCLASS(Config = Game)
class OPENTOURNAMENT_API UUR_CheatManager : public UCheatManager
{
    GENERATED_BODY()

    /////////////////////////////////////////////////////////////////////////////////////////////////

    virtual void God() override;

    /////////////////////////////////////////////////////////////////////////////////////////////////

    UFUNCTION(exec, Category = "Cheat")
    void Cheat_Loaded();

    UPROPERTY(Config)
    TArray<TSoftClassPtr<AUR_Weapon>> LoadedWeaponClasses;

    UFUNCTION(exec, Category = "Cheat")
    void Cheat_AddScore(int32 InValue = 1);
};
