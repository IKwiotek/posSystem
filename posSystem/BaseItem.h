#ifndef Base_Item_H
#define Base_Item_H
#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"

using namespace std;

class BaseItem
{
public:
	BaseItem();
	BaseItem(string name, string category, float price, int quantity);

	void setName(string name);
	void setCategory(string category);
	void setPrice(float price);
	void setQuantity(int quantity);

	string getName() const;
	string getCategory() const;
	float getPrice() const;
	int getQuantity() const;

private:
	string name;
	string category;
	float price;
	int quantity;
};

#endif Base_Item_H
