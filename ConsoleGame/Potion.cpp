#include "Potion.h"

Potion::Potion()
{
	itemName = "null";
	itemPrice = 0;
	healAmount = 0;
}

Potion::~Potion()
{

}

Potion::Potion(string tempItemName, int tempItemPrice, int tempItemHealAmount)
{
	itemName = tempItemName;
	itemPrice = tempItemPrice;
	healAmount = tempItemHealAmount;
}

int Potion::getItemPrice()
{
	return itemPrice;
}

string Potion::getItemName()
{
	return itemName;
}

int Potion::getHealAmount()
{
	return healAmount;
}
