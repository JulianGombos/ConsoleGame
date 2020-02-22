#pragma once
#include "ClassBase.h"

using namespace std;

class Warrior : public ClassBase {

private:

	const int DEFAULT_HEALTH_MODIFIER = 10;
	const int DEFAULT_ATTACK_MODIFIER = 10;
	const int DEFAULT_DEFENSE_MODIFIER = 10;
	const int DEFAULT_SPEED_MODIFIER = 10;

	//There are modifier variables for each stat in the base class. Those modifiers change depending on certain player attributes.

public:

	Warrior();
	Warrior(int, int, int, int);
	~Warrior();

	//These functions modify and return the attribute modifiers. They dont actually set the player attributes.
	//They are used to calculate the changes to the player attributes.

	//The value passed as a parameter to these functions are how much the modifier should be changed by, not the actual value the modifier should be set to.
	void setHealthModifier(int);
	void setAttackModifier(int);
	void setDefenseModifier(int);
	void setSpeedModifier(int);

	string getClassName();
	int getHealthModifier();
	int getAttackModifier();
	int getDefenseModifier();
	int getSpeedModifier();

};
