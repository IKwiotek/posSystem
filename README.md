##Overview
The design plan is divided into three sections. Each section corresponds to a specific user requirement defined by the business. The list of sections is as follows.


#Section One
Program Interaction

This section includes considerations for interacting with the point of sale system. 
-Program Entry Point
-How to get the system source code.
-Best practices and possible errors for user data input.

#Section Two 
Program Functionality

Inventory Search
Item Sale
Item Return
Add New Items to Inventory
Update Existing Items
Locate Expired Items
Exit Program

#Section Three 
Program Data Structure

Base Class
BaseItem
	
Derived Classes 
CannedItem
FrozenFoodItem
MeatItem
ProduceItem
Section One
Program Interaction


Program Entry Point

	The program entry point may be found in the posSystem.cpp file.



How to get the system source code.

The ideal source for downloading this application is GIT. GIT is a version control system. Downloading the application from GIT will ensure that the user has the latest copy of the code including new features, enhancements, and bug fixes.

The GIT Source Code Link is available here.


If you are reading this file you have received a copy of the source code. While it is recommended that you download the latest version of the application from GIT, you can rest assured that the source code attached to this documentation is a stable version. The source code attached to this documentation is Version 1.0.0


Best practices and possible errors for user data input.

It is important to use the proper characters when the application prompts the user for an input. 
If the user attempts to enter a numerical character for entries where an alphabetic character is expected, the user will experience adverse conditions possibly resulting in the termination of the application.
Conversely, if the user attempts to enter an alphabetic character for entries where a numeric character is expected, the user will experience adverse conditions possibly resulting in the termination of the application.

NOTE   The application’s designer is expecting the user to thoroughly review user documentation including this Design Plan and the Test Plan manual prior to interacting with the program!


Section Two
Program Functionality

Inventory Search

Inventory Search is comprised of two distinct functionalities. A user may search for an item by name, or by item category. Comparison by name will loop through all items in the inventory for a match. Comparison by category will allow the user to select a category. The program will then prompt the user to select the index of the target item.



Item Sale

Item Sale is comprised of two distinct functionalities. A user may sell an item by name, or by item category. Sell by name will loop through all items in the inventory for a match. Once a match is found, the user will specify the quantity to sell. Sell by category will allow the user to select a category. The program will then prompt the user to select the index of the target item. Once a match is found, the user will specify the quantity to sell. A total price will then be displayed for the user to collect from the buyer.



Item Return

Item Return is comprised of one distinct functionality. A user may return an item by name. Return by name will loop through all items in the inventory for a match. Once a match is found, the user will specify the quantity to return. A total price will then be displayed for the user to refund to the buyer.



Add New Items to Inventory

Add New Items to Inventory is comprised of one distinct functionality. A user may add a new item to the preexisting inventory. The user will be prompted for all applicable details including name, product category, price, and quantity. The user may also be prompted for category specific details. Once all details are collected, the item is immediately added to the inventory and will be available for interaction.




Update Existing Items

Update Existing Items in Inventory is comprised of one distinct functionality. A user may update an existing item in the inventory. The user will be prompted for all applicable details including name, product category, price, and quantity. The user may also be prompted for category specific details. Once all details are collected, the item is immediately updated in the inventory and will be available for interaction.



Locate Expired Items

Locate Expired Items is comprised of one distinct functionality. A user may specify a past or future date to check inventory against for expiration. For items in the inventory that include an expiration date, the user specified date will be compared to the expiration date. If the item expiration date is equaled to or greater than the user defined date, the product will be returned to the user with full details including the expiration date. 

NOTE  Version 1.0.0 includes expiration dates only on produce items. 



Exit Program

Exit Program is comprised of one distinct functionality. When the user has completed interaction with the point of sale system, the user may gracefully exit the application. 

















Section Three
Program Data Structure



Base Class

BaseItem

The Base Item includes four attributes for the user to store information.
Name 
Category 
Price 
Quantity
	


Derived Classes 

In addition to the four attributes found in the Base Item, each Item Category below may include additional attributes.

CannedItem
Brand

FrozenFoodItem
Is Pre-Cooked

MeatItem
Source Animal

ProduceItem
Country of Origin
Date
Year
Month
Day





Please Enjoy our Point of Sale System!
