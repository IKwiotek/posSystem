#include "stdafx.h"
#include "ProduceItem.h"
#include <time.h>
#include <stdio.h>

ProduceItem::ProduceItem()
{
	setName("Invalid");
	setCategory("Invaid");
	setPrice(00.00);
	setQuantity(0);
	setCountryOfOrigin("Invalid");
	setYear(0);
	setMonth(0);
	setDay(0);
}

ProduceItem::ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin, int year, int month, int day)
{
	setName(name);
	setCategory(category);
	setPrice(price);
	setQuantity(quantity);
	setCountryOfOrigin(countryOfOrigin);
	setYear(year);
	setMonth(month);
	setDay(day);
}


void ProduceItem::setYear(int year)
{
	this->year = year;
}

void ProduceItem::setMonth(int month)
{
	this->month = month;
}

void ProduceItem::setDay(int day)
{
	this->day = day;
}

int ProduceItem::getYear()
{
	return year;
}

int ProduceItem::getMonth()
{
	return month;
}

int ProduceItem::getDay()
{
	return day;
}

void ProduceItem::setCountryOfOrigin(string countryOfOrigin)
{
	this->countryOfOrigin = countryOfOrigin;
}

string ProduceItem::getCountryOfOrigin()
{
	return countryOfOrigin;
}

//ProduceItem::ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin)
//{
//	setName(name);
//	setCategory(category);
//	setPrice(price);
//	setQuantity(quantity);
//	setCountryOfOrigin(countryOfOrigin);
//}
