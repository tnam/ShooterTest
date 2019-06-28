// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ShooterPickup.h"
#include "ShooterPickup_Weapon.generated.h"

class AShooterCharacter;

// A pickup object that replenishes character health
UCLASS(Abstract, Blueprintable)
class AShooterPickup_Weapon : public AShooterPickup
{
	GENERATED_UCLASS_BODY()

	/** check if pawn can use this pickup */
	virtual bool CanBePickedUp(AShooterCharacter* TestPawn) const override;

	/** set the weapon to be picked */
	void SetWeapon(AShooterWeapon* InWeapon) { Weapon = InWeapon; }

protected:

	/** weapon pickup */
	class AShooterWeapon* Weapon;

	/** give pickup */
	virtual void GivePickupTo(AShooterCharacter* Pawn) override;
};
