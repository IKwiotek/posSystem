#ifndef Produce_Item_H
#define Produce_Item_H
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
//#include <ctime>
#include "stdafx.h"
#include "BaseItem.h"

using namespace std;

class ProduceItem : public BaseItem
{
public:
	ProduceItem();
	ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin, int year, int month, int day);

	void setCountryOfOrigin(string countryOfOrigin);
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);

	int getYear();
	int getMonth();
	int getDay();
	string getCountryOfOrigin();

private:
	string countryOfOrigin;
	int year;
	int month;
	int day;
};

#endif 

/*ProduceItem(string name, string category, float price, int quantity, string countryOfOrigin);*/