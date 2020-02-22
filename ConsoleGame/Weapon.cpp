#include "Weapon.h"

Weapon::Weapon()
{
	itemName = "null";
	itemPrice = 0;
	attackModifier = 0;
}

Weapon::Weapon(string tempName, int tempItemPrice, int tempAttackModifier)
{
	itemName = tempName;
	itemPrice = tempItemPrice;
	attackModifier = tempAttackModifier;
}

Weapon::~Weapon()
{

}

int Weapon::getItemPrice()
{
	return itemPrice;
}

string Weapon::getItemName()
{
	return itemName;
}
