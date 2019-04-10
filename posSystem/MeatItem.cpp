#include "stdafx.h"
#include "MeatItem.h"

MeatItem::MeatItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
	setSourceAnimal("Invalid");
}

MeatItem::MeatItem(string name, string category, float price, int quantity, string sourceAnimal)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
	setSourceAnimal(sourceAnimal);
}

void MeatItem::setSourceAnimal(string sourceAnimal)
{
	this->sourceAnimal = sourceAnimal;
}

string MeatItem::getSourceAnimal()
{
	return sourceAnimal;
}
