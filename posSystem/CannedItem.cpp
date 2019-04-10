#include "stdafx.h"
#include "CannedItem.h"

CannedItem::CannedItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
	setBrand("Invalid");
}

CannedItem::CannedItem(string name, string category, float price, int quantity, string brand)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
	setBrand(brand);
}

void CannedItem::setBrand(string brand)
{
	this->brand = brand;
}

string CannedItem::getBrand()
{
	return brand;
}
