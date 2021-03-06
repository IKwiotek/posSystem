#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> // For function getch()
#include <vector>
#include <time.h>  
#include "BaseItem.h"
#include "CannedItem.h"
#include "FrozenFoodItem.h"
#include "MeatItem.h"
#include "ProduceItem.h"

using namespace std;


// Load Main Menu
void showMenu();

// List Items for each corresponding category
void listCannedGoods();
void listFrozenFoods();
void listMeats();
void listProduceItems();

// Search Related Functions
void showSearchMenu();
void searchAllProducts();
void searchProductByName();
void showSearchCategoryMenu();
void searchProductByCategory();

// Sell Items Related Functions
void sellItem();
void showSellMenu();
void sellItemByName();
void searchProductByCategoryForSale();
void selectAndSellCannedItemByIndex();
void selectAndSellFrozenFoodItemByIndex();
void selectAndSellMeatItemByIndex();
void selectAndSellProduceItemByIndex();

// Return Items Related Functions
void returnItemByName();

// Add New Items
void showAddItemMenu();
void addItem();
void addCannedItem();
void addFrozenFoodItem();
void addMeatItem();
void addProduceItem();

//Update Items Related Functions
void updateItem();

//Locate Expired Items Related Functions
void locateExpiredItems();

// Declare Vectors for each item category
vector<CannedItem> loadCanned();
vector<FrozenFoodItem> loadFrozenFood();
vector<MeatItem> loadMeat();
vector<ProduceItem> loadProduce();

// Initialize vector list for each item category 
vector<CannedItem> cannedList = loadCanned();
vector<FrozenFoodItem> frozenFoodList = loadFrozenFood();
vector<MeatItem> meatList = loadMeat();
vector<ProduceItem> produceList = loadProduce();



int main()
{
	cout << "Welcome to the point of sale system.\n" << endl;

	int menuChoice;

	while (true) {

		showMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1: searchAllProducts();
			break;
		case 2: sellItem();
			break;
		case 3: returnItemByName();
			break;
		case 4: addItem();
			break;
		case 5: updateItem();
			break;
		case 6: locateExpiredItems();
			break;
		case 7:;
			return 0;
		default:  cout << endl;
		}
		cout << endl;
	}
}

// Main Menu
void showMenu()
{
	cout << "Please select an option from the following catalog choices." << endl;

	cout << "1. Search Inventory" << endl;
	cout << "2. Sell Items" << endl;
	cout << "3. Return Items" << endl;
	cout << "4. Add New Items to Inventory" << endl;
	cout << "5. Update Items" << endl;
	cout << "6. Locate Expired Items" << endl;
	cout << "7. Exit" << endl;
	cout << "Please enter a choice: ";
}


// Load initial static data into vector list
vector<CannedItem> loadCanned()
{
	vector<CannedItem> cannedList;

	CannedItem firstItem;
	firstItem.setName("Chicken Noodle");
	firstItem.setCategory("Canned");
	firstItem.setPrice((float)01.99);
	firstItem.setQuantity(50);
	firstItem.setBrand("Campbells");
	cannedList.push_back(firstItem);

	CannedItem secondItem;
	secondItem.setName("Tomato");
	secondItem.setCategory("Canned");
	secondItem.setPrice((float)02.49);
	secondItem.setQuantity(50);
	secondItem.setBrand("Campbells");
	cannedList.push_back(secondItem);

	CannedItem thirdItem;
	thirdItem.setName("Mushroom");
	thirdItem.setCategory("Canned");
	thirdItem.setPrice((float)02.99);
	thirdItem.setQuantity(50);
	thirdItem.setBrand("Progresso");
	cannedList.push_back(thirdItem);

	CannedItem fourthItem;
	fourthItem.setName("Navy Bean");
	fourthItem.setCategory("Canned");
	fourthItem.setPrice((float)03.00);
	fourthItem.setQuantity(50);
	fourthItem.setBrand("Progresso");
	cannedList.push_back(fourthItem);

	CannedItem fifthItem;
	fifthItem.setName("Tortilla");
	fifthItem.setCategory("Canned");
	fifthItem.setPrice((float)02.49);
	fifthItem.setQuantity(50);
	fifthItem.setBrand("Campbells");
	cannedList.push_back(fifthItem);

	return cannedList;
}

vector<FrozenFoodItem> loadFrozenFood()
{
	vector<FrozenFoodItem> frozenFoodList;

	FrozenFoodItem firstItem;
	firstItem.setName("Waffles");
	firstItem.setCategory("Frozen Food");
	firstItem.setPrice((float)04.99);
	firstItem.setQuantity(25);
	firstItem.setIsPreCooked(true);
	frozenFoodList.push_back(firstItem);

	FrozenFoodItem secondItem;
	secondItem.setName("Ice Cream");
	secondItem.setCategory("Frozen Food");
	secondItem.setPrice((float)03.99);
	secondItem.setQuantity(25);
	secondItem.setIsPreCooked(false);
	frozenFoodList.push_back(secondItem);

	FrozenFoodItem thirdItem;
	thirdItem.setName("Pizza");
	thirdItem.setCategory("Frozen Food");
	thirdItem.setPrice((float)07.99);
	thirdItem.setQuantity(25);
	thirdItem.setIsPreCooked(false);
	frozenFoodList.push_back(thirdItem);

	FrozenFoodItem fourthItem;
	fourthItem.setName("Fish Sticks");
	fourthItem.setCategory("Frozen Food");
	fourthItem.setPrice((float)06.99);
	fourthItem.setQuantity(25);
	fourthItem.setIsPreCooked(true);
	frozenFoodList.push_back(fourthItem);

	FrozenFoodItem fifthItem;
	fifthItem.setName("Corn Dogs");
	fifthItem.setCategory("Frozen Food");
	fifthItem.setPrice((float)03.99);
	fifthItem.setQuantity(25);
	fifthItem.setIsPreCooked(true);
	frozenFoodList.push_back(fifthItem);

	return frozenFoodList;
}

vector<MeatItem> loadMeat()
{
	vector<MeatItem> meatList;

	MeatItem firstItem;
	firstItem.setName("Bone in Ribeye");
	firstItem.setCategory("Meat");
	firstItem.setPrice((float)24.99);
	firstItem.setQuantity(10);
	firstItem.setSourceAnimal("Cow");
	meatList.push_back(firstItem);

	MeatItem secondItem;
	secondItem.setName("Filet");
	secondItem.setCategory("Meat");
	secondItem.setPrice((float)29.99);
	secondItem.setQuantity(10);
	secondItem.setSourceAnimal("Cow");
	meatList.push_back(secondItem);

	MeatItem thirdItem;
	thirdItem.setName("Rack of Lamb");
	thirdItem.setCategory("Meat");
	thirdItem.setPrice((float)19.99);
	thirdItem.setQuantity(10);
	thirdItem.setSourceAnimal("Lamb");
	meatList.push_back(thirdItem);

	MeatItem fourthItem;
	fourthItem.setName("Pork Shoulder");
	fourthItem.setCategory("Meat");
	fourthItem.setPrice((float)14.99);
	fourthItem.setQuantity(10);
	fourthItem.setSourceAnimal("Pig");
	meatList.push_back(fourthItem);

	MeatItem fifthItem;
	fifthItem.setName("Spare Ribs");
	fifthItem.setCategory("Meat");
	fifthItem.setPrice((float)19.99);
	fifthItem.setQuantity(10);
	fifthItem.setSourceAnimal("Pig");
	meatList.push_back(fifthItem);

	return meatList;
}

vector<ProduceItem> loadProduce()
{
	vector<ProduceItem> produceList;

	ProduceItem firstItem;
	firstItem.setName("Apple");
	firstItem.setCategory("Produce");
	firstItem.setPrice((float)00.99);
	firstItem.setQuantity(10);
	firstItem.setCountryOfOrigin("United States");
	firstItem.setYear(2019);
	firstItem.setMonth(4);
	firstItem.setDay(10);
	produceList.push_back(firstItem);

	ProduceItem secondItem;
	secondItem.setName("Bannana");
	secondItem.setCategory("Produce");
	secondItem.setPrice((float)01.09);
	secondItem.setCountryOfOrigin("Jamaica");
	secondItem.setYear(2019);
	secondItem.setMonth(4);
	secondItem.setDay(10);
	secondItem.setQuantity(10);

	produceList.push_back(secondItem);

	ProduceItem thirdItem;
	thirdItem.setName("Pear");
	thirdItem.setCategory("Produce");
	thirdItem.setPrice((float)01.49);
	thirdItem.setQuantity(10);
	thirdItem.setCountryOfOrigin("France");
	thirdItem.setYear(2019);
	thirdItem.setMonth(4);
	thirdItem.setDay(10);
	produceList.push_back(thirdItem);

	ProduceItem fourthItem;
	fourthItem.setName("Carrot");
	fourthItem.setCategory("Produce");
	fourthItem.setPrice((float)00.75);
	fourthItem.setQuantity(10);
	fourthItem.setCountryOfOrigin("Mexico");
	fourthItem.setYear(2019);
	fourthItem.setMonth(4);
	fourthItem.setDay(10);
	produceList.push_back(fourthItem);

	ProduceItem fifthItem;
	fifthItem.setName("Squash");
	fifthItem.setCategory("Produce");
	fifthItem.setPrice((float)02.49);
	fifthItem.setQuantity(10);
	fifthItem.setCountryOfOrigin("Italy");
	fifthItem.setYear(2019);
	fifthItem.setMonth(4);
	fifthItem.setDay(10);
	produceList.push_back(fifthItem);

	return produceList;
}


// Print All Values within Product Vectors
void printCannedGoods(int index)
{
	cout << "Name: " << cannedList[index].getName() << "  Category: " << cannedList[index].getCategory() << "  Price: " << cannedList[index].getPrice() << "  Quantity: " << cannedList[index].getQuantity() << "  Brand: " << cannedList[index].getBrand() << endl;
}

void printFrozenFood(int index)
{
	string printIfPreCooked;

	if (frozenFoodList[index].getIsPreCooked() == 0)
	{
		printIfPreCooked = "False";
	}

	else
	{
		printIfPreCooked = "True";
	}

	cout << "Name: " << frozenFoodList[index].getName() << "  Category: " << frozenFoodList[index].getCategory() << "  Price: " << frozenFoodList[index].getPrice() << "  Quantity: " << frozenFoodList[index].getQuantity() << "  Is Pre Cooked?: " << printIfPreCooked << endl;
}

void printMeats(int index)
{
	cout << "Name: " << meatList[index].getName() << "  Category: " << meatList[index].getCategory() << "  Price: " << meatList[index].getPrice() << "  Quantity: " << meatList[index].getQuantity() << "  Source Animal: " << meatList[index].getSourceAnimal() << endl;
}

void printProduceItems(int index)
{
	cout << "Name: " << produceList[index].getName() << "  Category: " << produceList[index].getCategory() << "  Price: " << produceList[index].getPrice() << "  Quantity: " << produceList[index].getQuantity() << "  Country of Origin: " << produceList[index].getCountryOfOrigin() << " Expiration Date: " << produceList[index].getMonth() << '/' << produceList[index].getDay() << '/' << produceList[index].getYear() << endl;
}


// List all items in specific category
void listCannedGoods()
{
	cout << "Canned Good List" << endl;

	for (int i = 0; i < cannedList.size(); i++)
	{
		i++;
		cout << i << ". ";
		i--;
		printCannedGoods(i);
	}
}

void listFrozenFoods()
{
	cout << "Frozen Food List" << endl;

	for (int i = 0; i < frozenFoodList.size(); i++)
	{
		i++;
		cout << i << ". ";
		i--;
		printFrozenFood(i);
	}
}

void listMeats()
{
	cout << "Meat List" << endl;

	for (int i = 0; i < meatList.size(); i++)
	{
		i++;
		cout << i << ". ";
		i--;
		printMeats(i);
	}
}

void listProduceItems()
{
	cout << "Produce List" << endl;

	for (int i = 0; i < produceList.size(); i++)
	{
		i++;
		cout << i << ". ";
		i--;
		printProduceItems(i);
	}
}


// SEARCH LOGIC //
void showSearchMenu()
{
	cout << "\nPlease select an option from the following search choices." << endl;
	cout << "1. Search by product Name" << endl;
	cout << "2. Search by product Category" << endl;
	cout << "3. Exit" << endl;
	cout << "Please enter a choice: ";
}

void searchAllProducts()
{
	int menuChoice;
	bool listMenu = true;

	while (listMenu) {

		showSearchMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:searchProductByName();
			listMenu = false;
			break;
		case 2:searchProductByCategory();
			listMenu = false;
			break;
		case 3:;
			listMenu = false;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
}

void searchProductByName()
{
	string productName;
	bool productFound = false;

	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, productName);

	for (int i = 0; i < cannedList.size(); i++)
	{
		if (cannedList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printCannedGoods(i);
			productFound = true;
		}
	}

	for (int i = 0; i < frozenFoodList.size(); i++)
	{
		if (frozenFoodList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printFrozenFood(i);
			productFound = true;
		}
	}

	for (int i = 0; i < meatList.size(); i++)
	{
		if (meatList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printMeats(i);
			productFound = true;
		}
	}

	for (int i = 0; i < produceList.size(); i++)
	{
		if (produceList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printProduceItems(i);
			productFound = true;
		}
	}

	if (productFound == false)
	{
		cout << "No product found with matching name!" << endl;
	}
}

void showSearchCategoryMenu()
{
	cout << "\nPlease select an option from the following category choices." << endl;
	cout << "1. Display all products of type Canned Goods" << endl;
	cout << "2. Display all products of type Frozen Food" << endl;
	cout << "3. Display all products of type Meat" << endl;
	cout << "4. Display all products of type Produce" << endl;
	cout << "5. Exit" << endl;
	cout << "Please enter a choice: ";
}

void searchProductByCategory()
{
	int menuChoice;
	bool listMenu = true;

	while (listMenu) {

		showSearchCategoryMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:listCannedGoods();
			listMenu = false;
			break;
		case 2:listFrozenFoods();
			listMenu = false;
			break;
		case 3:listMeats();
			listMenu = false;
			break;
		case 4:listProduceItems();
			listMenu = false;
			break;
		case 5:;
			listMenu = false;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
}


// SELL LOGIC //
void showSellMenu()
{
	cout << "\nPlease select an option from the following sale choices." << endl;
	cout << "1. Sell product by Name" << endl;
	cout << "2. Sell product by Category" << endl;
	cout << "3. Exit" << endl;
	cout << "Please enter a choice: ";
}

void sellItem()
{
	int menuChoice;
	bool listMenu = true;

	while (listMenu) {

		showSellMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:sellItemByName();
			listMenu = false;
			break;
		case 2:searchProductByCategoryForSale();
			listMenu = false;
			break;
		case 3:;
			listMenu = false;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
}

void sellItemByName()
{
	string productName;
	bool productFound = false;

	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, productName);

	int countToSell = 0;
	int totalCount = 0;
	double totalPrice = 0.0;


	for (int i = 0; i < cannedList.size(); i++)
	{
		if (cannedList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printCannedGoods(i);
			productFound = true;

			cout << "Enter count to sell: ";
			cin >> countToSell;

			if (countToSell > cannedList[i].getQuantity())
			{
				cout << "Error: Count to sell exceeds inventory available!" << endl;
			}

			else if (countToSell <= 0)
			{
				cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = cannedList[i].getQuantity() - countToSell;
				totalPrice = cannedList[i].getPrice() * countToSell;
				cannedList[i].setQuantity(totalCount);
				cout << "Total Sale Price: $" << totalPrice << endl;
			}
		}
	}

	for (int i = 0; i < frozenFoodList.size(); i++)
	{
		if (frozenFoodList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printFrozenFood(i);
			productFound = true;

			cout << "Enter count to sell: ";
			cin >> countToSell;

			if (countToSell > frozenFoodList[i].getQuantity())
			{
				cout << "Error: Count to sell exceeds inventory available!" << endl;
			}

			else if (countToSell <= 0)
			{
				cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = frozenFoodList[i].getQuantity() - countToSell;
				totalPrice = frozenFoodList[i].getPrice() * countToSell;
				frozenFoodList[i].setQuantity(totalCount);
				cout << "Total Sale Price: $" << totalPrice << endl;
			}
		}
	}

	for (int i = 0; i < meatList.size(); i++)
	{
		if (meatList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printMeats(i);
			productFound = true;

			cout << "Enter count to sell: ";
			cin >> countToSell;

			if (countToSell > meatList[i].getQuantity())
			{
				cout << "Error: Count to sell exceeds inventory available!" << endl;
			}

			else if (countToSell <= 0)
			{
				cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = meatList[i].getQuantity() - countToSell;
				totalPrice = meatList[i].getPrice() * countToSell;
				meatList[i].setQuantity(totalCount);
				cout << "Total Sale Price: $" << totalPrice << endl;
			}
		}
	}

	for (int i = 0; i < produceList.size(); i++)
	{
		if (produceList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printProduceItems(i);
			productFound = true;

			cout << "Enter count to sell: ";
			cin >> countToSell;

			if (countToSell > produceList[i].getQuantity())
			{
				cout << "Error: Count to sell exceeds inventory available!" << endl;
			}

			else if (countToSell <= 0)
			{
				cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = produceList[i].getQuantity() - countToSell;
				totalPrice = produceList[i].getPrice() * countToSell;
				produceList[i].setQuantity(totalCount);
				cout << "Total Sale Price: $" << totalPrice << endl;
			}
		}
	}

	if (productFound == false)
	{
		cout << "No product found with matching name!" << endl;
	}
}

void searchProductByCategoryForSale()
{
	int menuChoice;
	bool listMenu = true;

	while (listMenu) {

		showSearchCategoryMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:listCannedGoods();
			selectAndSellCannedItemByIndex();
			listMenu = false;
			break;
		case 2:listFrozenFoods();
			void selectAndSellFrozenFoodItemByIndex();
			listMenu = false;
			break;
		case 3:listMeats();
			selectAndSellMeatItemByIndex();
			listMenu = false;
			break;
		case 4:listProduceItems();
			selectAndSellProduceItemByIndex();
			listMenu = false;
			break;
		case 5:;
			listMenu = false;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
}

void selectAndSellCannedItemByIndex()
{
	int i = 0;
	int countToSell = 0;
	int totalCount = 0;
	double totalPrice = 0.0;

	cout << "Specify item number of Canned Item to sell: ";
	cin >> i;
	i--;

	if (i < 0 || i >= cannedList.size())
	{
		cout << "No item exists at this item number. Return to main menu." << endl;
	}

	else
	{
		cout << "Enter count to sell: ";
		cin >> countToSell;

		if (countToSell > cannedList[i].getQuantity())
		{
			cout << "Error: Count to sell exceeds inventory available!" << endl;
		}

		else if (countToSell <= 0)
		{
			cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
		}

		else
		{
			totalCount = cannedList[i].getQuantity() - countToSell;
			totalPrice = cannedList[i].getPrice() * countToSell;
			cannedList[i].setQuantity(totalCount);
			cout << "Total Sale Price: $" << totalPrice << endl;
		}
	}
}

void selectAndSellFrozenFoodItemByIndex()
{
	int i = 0;
	int countToSell = 0;
	int totalCount = 0;
	double totalPrice = 0.0;

	cout << "Specify item number of Frozen Food Item to sell: ";
	cin >> i;
	i--;

	if (i < 0 || i >= frozenFoodList.size())
	{
		cout << "No item exists at this item number. Return to main menu." << endl;
	}

	else
	{
		cout << "Enter count to sell: ";
		cin >> countToSell;

		if (countToSell > frozenFoodList[i].getQuantity())
		{
			cout << "Error: Count to sell exceeds inventory available!" << endl;
		}

		else if (countToSell <= 0)
		{
			cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
		}

		else
		{
			totalCount = frozenFoodList[i].getQuantity() - countToSell;
			totalPrice = frozenFoodList[i].getPrice() * countToSell;
			frozenFoodList[i].setQuantity(totalCount);
			cout << "Total Sale Price: $" << totalPrice << endl;
		}
	}
}

void selectAndSellMeatItemByIndex()
{
	int i = 0;
	int countToSell = 0;
	int totalCount = 0;
	double totalPrice = 0.0;

	cout << "Specify item number of Meat Item to sell: ";
	cin >> i;
	i--;

	if (i < 0 || i >= meatList.size())
	{
		cout << "No item exists at this item number. Return to main menu." << endl;
	}

	else
	{
		cout << "Enter count to sell: ";
		cin >> countToSell;

		if (countToSell > meatList[i].getQuantity())
		{
			cout << "Error: Count to sell exceeds inventory available!" << endl;
		}

		else if (countToSell <= 0)
		{
			cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
		}

		else
		{
			totalCount = meatList[i].getQuantity() - countToSell;
			totalPrice = meatList[i].getPrice() * countToSell;
			meatList[i].setQuantity(totalCount);
			cout << "Total Sale Price: $" << totalPrice << endl;
		}
	}
}

void selectAndSellProduceItemByIndex()
{
	int i = 0;
	int countToSell = 0;
	int totalCount = 0;
	double totalPrice = 0.0;

	cout << "Specify item number of Produce Item to sell: ";
	cin >> i;
	i--;

	if (i < 0 || i >= produceList.size())
	{
		cout << "No item exists at this item number. Return to main menu." << endl;
	}

	else
	{
		cout << "\nEnter count to sell: ";
		cin >> countToSell;

		if (countToSell > produceList[i].getQuantity())
		{
			cout << "Error: Count to sell exceeds inventory available!" << endl;
		}

		else if (countToSell <= 0)
		{
			cout << "Error: Count to sell is invalid value. Returning to main menu!" << endl;
		}

		else
		{
			totalCount = produceList[i].getQuantity() - countToSell;
			totalPrice = produceList[i].getPrice() * countToSell;
			produceList[i].setQuantity(totalCount);
			cout << "Total Sale Price: $" << totalPrice << endl;
		}
	}
}


//RETURN LOGIC //
void returnItemByName()
{
	string productName;
	bool productFound = false;

	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, productName);

	int countToReturn = 0;
	int totalCount = 0;
	double totalRefundPrice = 0.0;


	for (int i = 0; i < cannedList.size(); i++)
	{
		if (cannedList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printCannedGoods(i);
			productFound = true;

			cout << "Enter count to return: ";
			cin >> countToReturn;

			if (countToReturn <= 0)
			{
				cout << "Error: Count to return is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = cannedList[i].getQuantity() + countToReturn;
				totalRefundPrice = cannedList[i].getPrice() * countToReturn;
				cannedList[i].setQuantity(totalCount);
				cout << "Total Refund Amount: $" << totalRefundPrice << endl;
			}
		}
	}

	for (int i = 0; i < frozenFoodList.size(); i++)
	{
		if (frozenFoodList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printFrozenFood(i);
			productFound = true;

			cout << "Enter count to return: ";
			cin >> countToReturn;

			if (countToReturn <= 0)
			{
				cout << "Error: Count to return is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = frozenFoodList[i].getQuantity() + countToReturn;
				totalRefundPrice = frozenFoodList[i].getPrice() * countToReturn;
				frozenFoodList[i].setQuantity(totalCount);
				cout << "Total Refund Amount: $" << totalRefundPrice << endl;
			}
		}
	}

	for (int i = 0; i < meatList.size(); i++)
	{
		if (meatList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printMeats(i);
			productFound = true;

			cout << "Enter count to return: ";
			cin >> countToReturn;

			if (countToReturn <= 0)
			{
				cout << "Error: Count to return is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = meatList[i].getQuantity() + countToReturn;
				totalRefundPrice = meatList[i].getPrice() * countToReturn;
				meatList[i].setQuantity(totalCount);
				cout << "Total Refund Amount: $" << totalRefundPrice << endl;
			}
		}
	}

	for (int i = 0; i < produceList.size(); i++)
	{
		if (produceList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			printProduceItems(i);
			productFound = true;

			cout << "Enter count to return: ";
			cin >> countToReturn;

			if (countToReturn <= 0)
			{
				cout << "Error: Count to return is invalid value. Returning to main menu!" << endl;
			}

			else
			{
				totalCount = produceList[i].getQuantity() + countToReturn;
				totalRefundPrice = produceList[i].getPrice() * countToReturn;
				produceList[i].setQuantity(totalCount);
				cout << "Total Refund Amount: $" << totalRefundPrice << endl;
			}
		}
	}

	if (productFound == false)
	{
		cout << "No product found with matching name!" << endl;
	}
}


// ADD NEW ITEMS //
void showAddItemMenu()
{
	cout << "\nPlease select the appropriate category option for the new item." << endl;
	cout << "1. Canned Goods" << endl;
	cout << "2. Frozen Foods" << endl;
	cout << "3. Meat" << endl;
	cout << "4. Produce" << endl;
	cout << "5. Exit" << endl;
	cout << "Please enter a choice: ";
}

void addItem()
{
	int menuChoice;
	bool listMenu = true;

	while (listMenu) {

		showAddItemMenu();
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1: addCannedItem();
			listMenu = false;
			break;
		case 2: addFrozenFoodItem();
			listMenu = false;
			break;
		case 3: addMeatItem();
			listMenu = false;
			break;
		case 4: addProduceItem();
			listMenu = false;
			break;
		case 5:;
			listMenu = false;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
}

void addCannedItem()
{
	CannedItem cannedItem;

	string name;
	string category;
	float price;
	int quantity;
	string brand;

	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, name);

	category = "Canned";

	//Error Handling Possible
	cout << "Enter Product Price: ";
	cin >> price;

	//Error Handling Possible
	cout << "Enter Product Quantity: ";
	cin >> quantity;

	cout << "Enter Product Brand: ";
	cin.ignore();
	getline(cin, brand);

	cannedItem.setName(name);
	cannedItem.setCategory(category);
	cannedItem.setPrice(price);
	cannedItem.setQuantity(quantity);
	cannedItem.setBrand(brand);

	cannedList.push_back(cannedItem);

	cout << "Product added successfully!" << endl;
}

void addFrozenFoodItem()
{
	FrozenFoodItem frozenItem;

	string name;
	string category;
	float price;
	int quantity;
	string userInputIsPreCooked;
	bool isPreCooked;


	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, name);

	category = "Frozen Food";

	//Error Handling Possible
	cout << "Enter Product Price: ";
	cin >> price;

	//Error Handling Possible
	cout << "Enter Product Quantity: ";
	cin >> quantity;

	cout << "Enter 'true' if product pre-cooked, 'false' otherwise: ";
	cin.ignore();
	getline(cin, userInputIsPreCooked);
	if (userInputIsPreCooked == "true")
	{
		isPreCooked = true;
	}

	else
	{
		isPreCooked = false;
	}

	frozenItem.setName(name);
	frozenItem.setCategory(category);
	frozenItem.setPrice(price);
	frozenItem.setQuantity(quantity);
	frozenItem.setIsPreCooked(isPreCooked);

	frozenFoodList.push_back(frozenItem);

	cout << "Product added successfully!" << endl;
}

void addMeatItem()
{
	MeatItem meatItem;

	string name;
	string category;
	float price;
	int quantity;
	string sourceAnimal;


	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, name);

	category = "Meat";

	//Error Handling Possible
	cout << "Enter Product Price: ";
	cin >> price;

	//Error Handling Possible
	cout << "Enter Product Quantity: ";
	cin >> quantity;

	cout << "Enter Source Animal: ";
	cin.ignore();
	getline(cin, sourceAnimal);

	meatItem.setName(name);
	meatItem.setCategory(category);
	meatItem.setPrice(price);
	meatItem.setQuantity(quantity);
	meatItem.setSourceAnimal(sourceAnimal);

	meatList.push_back(meatItem);

	cout << "Product added successfully!" << endl;
}

void addProduceItem()
{
	ProduceItem produceItem;

	string name;
	string category;
	float price;
	int quantity;
	string countryOfOrigin;
	int year;
	int month;
	int day;


	cout << "Enter Product Name: ";
	cin.ignore();
	getline(cin, name);

	category = "Produce";

	//Error Handling Possible
	cout << "Enter Product Price: ";
	cin >> price;

	//Error Handling Possible
	cout << "Enter Product Quantity: ";
	cin >> quantity;

	cout << "Enter Product Country of Origin: ";
	cin.ignore();
	getline(cin, countryOfOrigin);

	cout << "Enter Product Expiration Year: ";
	cin >> year;

	cout << "Enter Product Expiration Month: ";
	cin >> month;

	cout << "Enter Product Expiration Day: ";
	cin >> day;

	produceItem.setName(name);
	produceItem.setCategory(category);
	produceItem.setPrice(price);
	produceItem.setQuantity(quantity);
	produceItem.setCountryOfOrigin(countryOfOrigin);
	produceItem.setYear(year);
	produceItem.setMonth(month);
	produceItem.setDay(day);

	produceList.push_back(produceItem);

	cout << "Product added successfully!" << endl;
}


// UPDATE ITEMS //
void updateItem()
{
	string productName;
	bool productFound = false;

	cout << "Enter Product Name for Update: ";
	cin.ignore();
	getline(cin, productName);


	for (int i = 0; i < cannedList.size(); i++)
	{
		if (cannedList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			
			CannedItem cannedItem;

			string name;
			string category;
			float price;
			int quantity;
			string brand;


			cout << "Enter Product Name: ";
			/*cin.ignore();*/
			getline(cin, name);

			category = "Canned";

			//Error Handling Possible
			cout << "Enter Product Price: ";
			cin >> price;

			//Error Handling Possible
			cout << "Enter Product Quantity: ";
			cin >> quantity;

			cout << "Enter Product Brand: ";
			cin.ignore();
			getline(cin, brand);

			cannedList[i].setName(name);
			cannedList[i].setCategory(category);
			cannedList[i].setPrice(price);
			cannedList[i].setQuantity(quantity);
			cannedList[i].setBrand(brand);

			productFound = true;

			cout << "Product updated successfully!" << endl;

			break;
		}
	}

	for (int i = 0; i < frozenFoodList.size(); i++)
	{
		if (frozenFoodList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			
			FrozenFoodItem frozenItem;

			string name;
			string category;
			float price;
			int quantity;
			string userInputIsPreCooked;
			bool isPreCooked;


			cout << "Enter Product Name: ";
			/*cin.ignore();*/
			getline(cin, name);

			category = "Frozen Food";

			//Error Handling Possible
			cout << "Enter Product Price: ";
			cin >> price;

			//Error Handling Possible
			cout << "Enter Product Quantity: ";
			cin >> quantity;

			cout << "Enter 'true' if product pre-cooked, 'false' otherwise: ";
			cin.ignore();
			getline(cin, userInputIsPreCooked);
			if (userInputIsPreCooked == "true")
			{
				isPreCooked = true;
			}

			else
			{
				isPreCooked = false;
			}

			frozenFoodList[i].setName(name);
			frozenFoodList[i].setCategory(category);
			frozenFoodList[i].setPrice(price);
			frozenFoodList[i].setQuantity(quantity);
			frozenFoodList[i].setIsPreCooked(isPreCooked);

			productFound = true;

			cout << "Product updated successfully!" << endl;

			break;
		}
	}

	for (int i = 0; i < meatList.size(); i++)
	{
		if (meatList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			
			MeatItem meatItem;

			string name;
			string category;
			float price;
			int quantity;
			string sourceAnimal;


			cout << "Enter Product Name: ";
			/*cin.ignore();*/
			getline(cin, name);

			category = "Meat";

			//Error Handling Possible
			cout << "Enter Product Price: ";
			cin >> price;

			//Error Handling Possible
			cout << "Enter Product Quantity: ";
			cin >> quantity;

			cout << "Enter Source Animal: ";
			cin.ignore();
			getline(cin, sourceAnimal);

			meatList[i].setName(name);
			meatList[i].setCategory(category);
			meatList[i].setPrice(price);
			meatList[i].setQuantity(quantity);
			meatList[i].setSourceAnimal(sourceAnimal);

			productFound = true;

			cout << "Product updated successfully!" << endl;

			break;
		}
	}

	for (int i = 0; i < produceList.size(); i++)
	{
		if (produceList[i].getName() == productName)
		{
			cout << "Matching Item Found" << endl;
			
			ProduceItem produceItem;

			string name;
			string category;
			float price;
			int quantity;
			string countryOfOrigin;
			int year;
			int month;
			int day;


			cout << "Enter Product Name: ";
			/*cin.ignore();*/
			getline(cin, name);

			category = "Produce";

			//Error Handling Possible
			cout << "Enter Product Price: ";
			cin >> price;

			//Error Handling Possible
			cout << "Enter Product Quantity: ";
			cin >> quantity;

			cout << "Enter Product Country of Origin: ";
			cin.ignore();
			getline(cin, countryOfOrigin);

			cout << "Enter Product Expiration Year: ";
			cin >> year;

			cout << "Enter Product Expiration Month: ";
			cin >> month;

			cout << "Enter Product Expiration Day: ";
			cin >> day;

			produceList[i].setName(name);
			produceList[i].setCategory(category);
			produceList[i].setPrice(price);
			produceList[i].setQuantity(quantity);
			produceList[i].setCountryOfOrigin(countryOfOrigin);
			produceList[i].setYear(year);
			produceList[i].setMonth(month);
			produceList[i].setDay(day);

			productFound = true;

			cout << "Product updated successfully!" << endl;

			break;
		}
	}

	if (productFound == false)
	{
		cout << "No product found with matching name!" << endl;
	}
}


// LOCATE EXPIRED ITEMS //
void locateExpiredItems()
{
	int day = 0;
	int month = 0;
	int combinedDate = 0;
	bool expiredItems = false;

	cout << "\nEnter the target future date to check for upcoming expired items in inventory" << endl;
	cout << "NOTE: Only Produce Items Include an Expiration Date" << endl;
	cout << "Enter Target Month: ";
	cin >> month;
	cout << "Enter Target Day: ";
	cin >> day;

	combinedDate = (month * 30) + day;


	for (int i = 0; i < produceList.size(); i++)
	{
		int produceDay = produceList[i].getDay();
		int produceMonth = produceList[i].getMonth();
		int produceCombinedDate = (produceMonth * 30) + produceDay;

		if (produceCombinedDate >= combinedDate)
		{
			cout << "\nExpired Produce Item Found" << endl;
			printProduceItems(i);
			expiredItems = true;
		}
	}

	if (expiredItems == false)
	{
		cout << "No expired items found for specified future date" << endl;
	}
}
