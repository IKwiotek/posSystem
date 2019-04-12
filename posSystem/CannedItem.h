#ifndef Canned_Item_H
#define Canned_Item_H
#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"
#include "BaseItem.h"

using namespace std;

class CannedItem : public BaseItem
{
public:
	CannedItem();
	CannedItem(string name, string category, float price, int quantity, string brand);
	
	void setBrand(string brand);

	string getBrand();


private:
	string brand;
};

#endif Canned_Item_H