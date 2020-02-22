#include "Armor.h"

Armor::Armor()
{
	itemName = "null";
	itemPrice = 0;
	defenseModifier = 0;
	speedModifier = 0;
}

Armor::Armor(string tempItemName, int tempItemPrice, int tempDefenseModifier, int tempSpeedModifier)
{
	itemName = tempItemName;
	itemPrice = tempItemPrice;
	defenseModifier = tempDefenseModifier;
	speedModifier = tempSpeedModifier;
}

Armor::~Armor()
{

}

int Armor::getDefenseModifier()
{
	return defenseModifier;
}

int Armor::getSpeedModifier()
{
	return speedModifier;
}

int Armor::getItemPrice()
{
	return itemPrice;
}

string Armor::getItemName()
{
	return itemName;
}
