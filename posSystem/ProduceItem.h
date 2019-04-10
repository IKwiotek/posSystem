#ifndef Produce_Item_H
#define Produce_Item_H
#include <iostream>
#include <iomanip>
#include <string>
//#include <time.h>
//#include <ctime>
#include "stdafx.h"
#include "BaseItem.h"

using namespace std;

class ProduceItem : public BaseItem
{
public:
	ProduceItem();
	ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin);

	void setCountryOfOrigin(string countryOfOrigin);

	string getCountryOfOrigin();

private:
	string countryOfOrigin;
};

#endif 