#pragma once
#include <string>

#include "BuyItem.h"

using namespace std;

class Weapon : public BuyItem {

private:

	int attackModifier;

public:

	Weapon();
	Weapon(string, int, int); //Additional parameters should be added here for other weapon stats added
	~Weapon();

	int getItemPrice();
	string getItemName();

};