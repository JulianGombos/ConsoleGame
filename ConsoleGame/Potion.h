#pragma once
#include "BuyItem.h"

using namespace std;

class Potion : public BuyItem {

private:

	int healAmount;

public:

	Potion();
	Potion(string, int, int);
	~Potion();

	int getItemPrice();
	string getItemName();

	int getHealAmount();

};
