// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Components/InventoryComponent.h"
#include "Engine.h"
#include "Survival_Game/Items/Item.h"

#define LOCTEXT_NAMESPACE "Inventory"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
}

FItemAddResult UInventoryComponent::TryAddItemFromClass(TSubclassOf<class UItem> itemClass, const int32 quantity)
{
	UItem* item = NewObject<UItem>(GetOwner(), itemClass);
	item->SetQuantity(quantity);

	return TryAddItem(item);
}

bool UInventoryComponent::RemoveItem(UItem* item)
{
	if (GetOwner() && item) 
	{
		items.RemoveSingle(item);
		return true;
	}
	return false;
}

bool UInventoryComponent::HasItem(TSubclassOf<class UItem> itemClass, const int32 quantity) const
{
	if (UItem* itemToFind = FindItemByClass(itemClass)) return itemToFind->GetQuantity() >= quantity;
	return false;
}

UItem* UInventoryComponent::FindItem(UItem* item) const
{
	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass() == item->GetClass()) return invItem;
	}
	return nullptr;
}

UItem* UInventoryComponent::FindItemByClass(TSubclassOf<class UItem> itemClass) const
{
	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass() == itemClass) return invItem;
	}
	return nullptr;
}

TArray<UItem*> UInventoryComponent::FindItemsByClass(TSubclassOf<class UItem> itemClass) const
{
	TArray<UItem*> itemsOfClass;

	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass()->IsChildOf(itemClass)) itemsOfClass.Add(invItem);
	}

	return itemsOfClass;
}

float UInventoryComponent::GetCurrentWeight() const
{
	float weight = 0.0f;

	for (auto& item : items) 
	{
		if (item) weight += item->GetStackWeight();
	}

	return weight;
}

void UInventoryComponent::SetWeightCapacity(const float newWeightCapacity)
{
	weightCapacity = newWeightCapacity;
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::SetCapacity(const int32 newCapacity)
{
	capacity = newCapacity;
	OnInventoryUpdated.Broadcast();
}


void UInventoryComponent::RefreshInventory()
{
	OnInventoryUpdated.Broadcast();
}

int32 UInventoryComponent::ConsumeItem(UItem* item)
{
	if (item) 
	{
		ConsumeItem(item, item->GetQuantity());
	}
	return 0;
}

int32 UInventoryComponent::ConsumeItem(UItem* item, const int32 quantity)
{
	if (GetOwner() && item) 
	{
		const int32 removeQuantity = FMath::Min(quantity, item->GetQuantity());
		ensure(!(item->GetQuantity() - removeQuantity < 0));
		item->SetQuantity(item->GetQuantity() - removeQuantity);
		if (item->GetQuantity() <= 0) RemoveItem(item);
		else RefreshInventory();

		return removeQuantity;
	}

	return 0;
}

UItem* UInventoryComponent::AddItem(UItem* item)
{
	if (GetOwner() && item) 
	{
		UItem* newItem = NewObject<UItem>(GetOwner(), item->GetClass());
		newItem->SetQuantity(item->GetQuantity());
		newItem->world = GetWorld();
		newItem->owningInventory = this;
		newItem->AddedToInventory(this);
		items.Add(newItem);

		return newItem;
	}
	return nullptr;
}

FItemAddResult UInventoryComponent::TryAddItem(UItem* item)
{
	if (GetOwner() && item) 
	{
		const int32 addAmount = item->GetQuantity();
		if (items.Num() + 1 > GetCapacity()) return FItemAddResult::AddedNone(addAmount, LOCTEXT("Inventory Capacity Full", "Could Not Add Item To Inventory - Inventory Is Full"));
		if (!FMath::IsNearlyZero(item->weight) && GetCurrentWeight() + item->weight > GetWeightCapacity()) return FItemAddResult::AddedNone(addAmount, LOCTEXT("WeightCapacityReached", "Could Not Add Item To Inventory - Weight Capacity Reached"));
		if (item->bStackable) 
		{
			ensure(item->GetQuantity() <= item->maxStackSize);
			if (UItem* existingItem = FindItem(item)) 
			{
				if (existingItem->GetQuantity() < existingItem->maxStackSize) 
				{
					const int32 capacityMaxAddAmount = existingItem->maxStackSize - existingItem->GetQuantity();
					int32 actualAddAmount = FMath::Min(addAmount, capacityMaxAddAmount);
					FText errorText = LOCTEXT("InventoryErrorText", "Could Not Add All Of The Item To Your Inventory");
					if (!FMath::IsNearlyZero(item->weight)) 
					{
						const int32 maxAddAmount = FMath::FloorToInt((weightCapacity - GetCurrentWeight()) / item->weight);
						actualAddAmount = FMath::Min(actualAddAmount, maxAddAmount);
						if (actualAddAmount < addAmount) {
							errorText = FText::Format(LOCTEXT("InventoryTooMuchWeight", "Could Not Add Entire Stack Of %ItemName To Inventory. Weight Capcity Reached"), item->itemDisplayName);
						}
					}
					else if (actualAddAmount < addAmount) 
					{
						errorText = FText::Format(LOCTEXT("InventoryCapacityFilled", "Could Not Add Entire Stack Of %ItemName To Inventory. Inventory Full"), item->itemDisplayName);
					}

					if (actualAddAmount <= 0) return FItemAddResult::AddedNone(addAmount, LOCTEXT("InventoryErrorText", "Could Not Add Item To Inventory"));

					existingItem->SetQuantity(existingItem->GetQuantity() + actualAddAmount);
					ensure(existingItem->GetQuantity() <= existingItem->maxStackSize);

					if (actualAddAmount < addAmount) return FItemAddResult::AddedSome(addAmount, actualAddAmount, errorText);
					else return FItemAddResult::AddedAll(item->quantity);
				}
				else 
				{
					return FItemAddResult::AddedNone(addAmount, FText::Format(LOCTEXT("InventoryAtFullStack", "Could Not Add %ItemName. You Already Have A Full Stack"), item->itemDisplayName));
				}
			}
			else
			{
				AddItem(item);
				return FItemAddResult::AddedAll(addAmount);
			}
		}
		else
		{
			ensure(item->GetQuantity() == 1);
			AddItem(item);
			return FItemAddResult::AddedAll(addAmount);
		}
	}

	check(false);
	return FItemAddResult::AddedNone(-1, LOCTEXT("ErrorMessage",""));
}

#undef LOCTEXT_NAMESPACE