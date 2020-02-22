#pragma once
#include "BuyItem.h"

using namespace std;

class Armor : public BuyItem {

private:

	int defenseModifier;
	int speedModifier;

public:

	Armor();
	Armor(string, int , int, int);
	~Armor();

	int getDefenseModifier();
	int getSpeedModifier();


};