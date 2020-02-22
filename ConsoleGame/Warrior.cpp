#include "Warrior.h"

Warrior::Warrior()
{
	className = "Warrior";
	setHealthModifier(DEFAULT_HEALTH_MODIFIER);
	setAttackModifier(DEFAULT_ATTACK_MODIFIER);
	setDefenseModifier(DEFAULT_DEFENSE_MODIFIER);
	setSpeedModifier(DEFAULT_SPEED_MODIFIER);
}

Warrior::Warrior(int tempPlayerHealth, int tempPlayerAttack, int tempPlayerDefense, int tempPlayerSpeed)
{
	//The arguments here need to be redone. Not sure what this constructor should actually modify
}

Warrior::~Warrior()
{

}

void Warrior::setHealthModifier(int tempHealth)
{
	healthModifier += tempHealth;
}

void Warrior::setAttackModifier(int tempAttack)
{
	attackModifier += tempAttack;
}

void Warrior::setDefenseModifier(int tempDefense)
{
	defenseModifier += tempDefense;
}

void Warrior::setSpeedModifier(int tempSpeed)
{
	speedModifier += tempSpeed;
}

string Warrior::getClassName()
{
	return className;
}

int Warrior::getHealthModifier()
{
	return healthModifier;
}

int Warrior::getAttackModifier()
{
	return attackModifier;
}

int Warrior::getDefenseModifier()
{
	return defenseModifier;
}

int Warrior::getSpeedModifier()
{
	return speedModifier;
}
