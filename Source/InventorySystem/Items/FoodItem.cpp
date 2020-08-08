// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodItem.h"
#include "InventoryComponent.h"
#include "InventorySystemCharacter.h"

void UFoodItem::Use(class AInventorySystemCharacter* Character)
{
	if (Character)
	{
		if (!(Character->Health == 100.f)) {

			if ((Character->Health + HealthToHeal) > 100.f) {
				Character->Health = 100.f;
			}
			else {
				Character->Health += HealthToHeal;
			}

			if (OwningInventory)
			{
				OwningInventory->RemoveItem(this);
			}
		} 
	}
}