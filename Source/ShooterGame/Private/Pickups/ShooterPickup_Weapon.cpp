// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ShooterGame.h"
#include "Pickups/ShooterPickup_Weapon.h"

AShooterPickup_Weapon::AShooterPickup_Weapon(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, Weapon(nullptr)
{
}

bool AShooterPickup_Weapon::CanBePickedUp(class AShooterCharacter* TestPawn) const
{
	return TestPawn;
}

void AShooterPickup_Weapon::GivePickupTo(class AShooterCharacter* Pawn)
{
	if (Pawn && Weapon)
	{
		Pawn->AddWeapon(Weapon);
	}
}
