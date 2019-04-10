#include "stdafx.h"
#include "baseItem.h"

BaseItem::BaseItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
}

BaseItem::BaseItem(string name, string category, float price, int quantity)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
}

void BaseItem::setName(string name)
{
	this->name = name;
}

void BaseItem::setCategory(string category)
{
	this->category = category;
}

void BaseItem::setPrice(float price)
{
	this->price = price;
}

void BaseItem::setQuantity(int quantity)
{
	this->quantity = quantity;
}

string BaseItem::getName() const
{
	return name;
}

string BaseItem::getCategory() const
{
	return category;
}

float BaseItem::getPrice() const
{
	return price;
}

int BaseItem::getQuantity() const
{
	return quantity;
}
