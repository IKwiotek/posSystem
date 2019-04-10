#ifndef Frozen_Food_Item_H
#define Frozen_Food_Item_H
#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"
#include "BaseItem.h"

using namespace std;

class FrozenFoodItem : public BaseItem
{
public:
	FrozenFoodItem();
	FrozenFoodItem(string name, string category, float price, int quantity, bool isPreCooked);

	void setIsPreCooked(bool isPreCooked);

	bool getIsPreCooked();


private:
	bool isPreCooked;
};
#endif 

