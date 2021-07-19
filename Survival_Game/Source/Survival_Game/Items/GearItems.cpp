// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/GearItems.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"

UGearItems::UGearItems()
{
	damageDeduction = 0.1f;
}

bool UGearItems::Equip(ASurvivalGameCharacter* character)
{
	bool bEquipSuccessful = Super::Equip(character);
	if (bEquipSuccessful && character)
	{
		character->EquipGear(this);
	}
	return bEquipSuccessful;
}

bool UGearItems::UnEquip(ASurvivalGameCharacter* character)
{
	bool bUnEquipSuccessful = Super::UnEquip(character);
	if (bUnEquipSuccessful && character)
	{
		character->UnEquipGear(slot);
	}
	return bUnEquipSuccessful;
}
