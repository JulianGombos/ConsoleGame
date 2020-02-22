#include "BattleTools.h"

BattleTools::BattleTools()
{
	itemName = "null";
	itemPrice = 0;
	damage = 0;
}

BattleTools::BattleTools(string tempItemName, int tempItemPrice, int tempDamage)
{
	itemName = tempItemName;
	itemPrice = tempItemPrice;
	damage = tempDamage;
}

BattleTools::~BattleTools()
{

}

int BattleTools::getItemPrice()
{
	return itemPrice;
}

string BattleTools::getItemName()
{
	return itemName;
}

int BattleTools::getDamage()
{
	return damage;
}
