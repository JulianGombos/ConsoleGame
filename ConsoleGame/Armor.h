#pragma once
#include "BuyItem.h"

using namespace std;

class Armor : public BuyItem {

private:

	//Inherited members
	//int itemPrice
	//string itemName

	int defenseModifier;
	int speedModifier;

public:

	Armor();
	Armor(string, int , int, int);
	~Armor();

	int getDefenseModifier();
	int getSpeedModifier();

	//Inherited pure virtual functions
	int getItemPrice();
	string getItemName();

};