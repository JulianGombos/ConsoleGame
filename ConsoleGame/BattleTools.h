#pragma once
#include "BuyItem.h"

using namespace std;

class BattleTools : public BuyItem {

private:

	int damage;

public:

	BattleTools();
	BattleTools(string, int, int);
	~BattleTools();

	int getItemPrice();
	string getItemName();

	int getDamage();
};
