#include "stdafx.h"
#include "ProduceItem.h"

ProduceItem::ProduceItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
	setCountryOfOrigin("Invalid");
}

ProduceItem::ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
	setCountryOfOrigin(countryOfOrigin);
}

void ProduceItem::setCountryOfOrigin(string countryOfOrigin)
{
	this->countryOfOrigin = countryOfOrigin;
}

string ProduceItem::getCountryOfOrigin()
{
	return countryOfOrigin;
}
