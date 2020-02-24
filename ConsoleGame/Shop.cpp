#include "Shop.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
#include "BattleTools.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void Shop::importBuyItems()
{
	//Create all the BuyItems in the game. Probably import from a text file
	string fileInput;
	char itemType;

	ifstream iFile("BuyItems.txt");

	if (iFile.is_open())
	{
		int counter = 0;
		string inputs[10];
		while (!iFile.eof())
		{
			iFile.get(itemType);

			switch (itemType) { 
			case 'W': { //Weapons
				iFile.get(itemType); //This throws away the newline after the char. VERY IMPORTANT
				for (int i = 0; i < 3; i++) {
					getline(iFile, inputs[i]);
				}
				allBuyItems[counter] = new Weapon(inputs[0], stoi(inputs[1]), stoi(inputs[2]));
				break;
				}
			case 'A': { //Armor
				iFile.get(itemType);
				for (int i = 0; i < 4; i++) {
					getline(iFile, inputs[i]);
				}
				allBuyItems[counter] = new Armor(inputs[0], stoi(inputs[1]), stoi(inputs[2]), stoi(inputs[3]));
				break;
			}; 
			case 'P': { //Potions
				iFile.get(itemType);
				for (int i = 0; i < 3; i++) {
					getline(iFile, inputs[i]);
				}
				allBuyItems[counter] = new Potion(inputs[0], stoi(inputs[1]), stoi(inputs[2]));
				break;
			}; 
			case 'B': { //Battle Tools
				iFile.get(itemType);
				for (int i = 0; i < 3; i++) {
					getline(iFile, inputs[i]);
				}
				allBuyItems[counter] = new BattleTools(inputs[0], stoi(inputs[1]), stoi(inputs[2]));
				break;
			};
			}
			
			counter++;
		}
		iFile.close();
	}
	else cout << "Unable to open file: BuyItems.txt";
}

Shop::Shop()
{
	setupShopTitle();
	importBuyItems();
}

Shop::~Shop()
{

}

void Shop::fillShopItems()
{
	//Random generator in range for each type of BuyItem
	//Example: weapons consume indicies 0-10, armour 11-20,...
	//Shop can have like 10 items total. There could be certain amount of each type filled into the shop.
	for (int i = 0; i < 32; i++) {
		currentShopItems.push_back(allBuyItems[i]);
	}
}

void Shop::displayShopItems()
{
	/*
	Name           Price    Stats(Modifiers)	
	<1> Weapon1    30g      +25 attack
	<2> Health Pot 15g      Heals 15 HP
	*/
	for (int i = 0; i < 32; i++) {
		cout << "<" << i+1 << "> " << setw(20) << left << currentShopItems[i]->getItemName() << "\t" << currentShopItems[i]->getItemPrice() << "g" << endl;
	}
}

void Shop::setupShopTitle()
{
	string fileInput;

	ifstream iFile("ShopTitle.txt");

	if (iFile.is_open())
	{
		int i = 0;
		while (getline(iFile, fileInput))
		{
			shopTitleNameArray[i] = fileInput;
			i++;
		}
		iFile.close();
	}
	else cout << "Unable to open file: ShopTitle.txt";
}

void Shop::displayShopTitle()
{
	for (int i = 0; i < 7; i++) {
		cout << shopTitleNameArray[i] << endl;
	}
	cout << "Name\t\t\t\t" << "Price\t" << "Stat Modifier\n";
}

void Shop::loadShop()
{
	//Function called everytime player gets to the shop. This will load and display the shop
	//Probably will want to display the items in the player's inventory as well
	displayShopTitle();
	displayShopItems();
}

BuyItem * Shop::getBuyItem(int index)
{
	return allBuyItems[index];
}
