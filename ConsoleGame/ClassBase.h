#pragma once
#include <string>

using namespace std;

class ClassBase {

private:


protected:

	string className;
	int healthModifier, attackModifier, defenseModifier, speedModifier;

public:

	ClassBase();
	ClassBase(int, int, int, int);
	~ClassBase();

	virtual void setHealthModifier(int) = 0;
	virtual void setAttackModifier(int) = 0;
	virtual void setDefenseModifier(int) = 0;
	virtual void setSpeedModifier(int) = 0;

	virtual string getClassName() = 0;
	virtual int getHealthModifier() = 0;
	virtual int getAttackModifier() = 0;
	virtual int getDefenseModifier() = 0;
	virtual int getSpeedModifier() = 0;

};