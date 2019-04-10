#ifndef Meat_Item_H
#define Meat_Item_H
#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"
#include "BaseItem.h"

using namespace std;

class MeatItem : public BaseItem
{
public:
	MeatItem();
	MeatItem(string name, string category, float price, int quantity, string sourceAnimal);

	void setSourceAnimal(string sourceAnimal);

	string getSourceAnimal();


private:
	string sourceAnimal;
};

#endif 