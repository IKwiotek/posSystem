#include "stdafx.h"
#include "FrozenFoodItem.h"

FrozenFoodItem::FrozenFoodItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
	//Default to false for safety concerns when consuming raw food
	setIsPreCooked(false);
}

FrozenFoodItem::FrozenFoodItem(string name, string category, float price, int quantity, bool isPreCooked)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
	setIsPreCooked(isPreCooked);
}

void FrozenFoodItem::setIsPreCooked(bool isPreCooked)
{
	this->isPreCooked = isPreCooked;
}

bool FrozenFoodItem::getIsPreCooked()
{
	return isPreCooked;
}
