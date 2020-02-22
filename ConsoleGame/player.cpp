#include "player.h"

Player::Player()
{
	name = "null";
	health = 10;
	attack = 10;
	defense = 10;
	speed = 10;
}

Player::Player(string tempName)
{
	name = tempName;
}

Player::Player(string tempName, int classSelection)
{
	name = tempName;
	switch (classSelection) {
	case 0: {playerClass = new Warrior(); }
	}
}

Player::~Player()
{
	delete playerClass;
	delete playerInventory;
}

void Player::setHealth(int x)
{
	health = x;
}

void Player::setAttack(int x)
{
	attack = x;
}

void Player::setDefense(int x)
{
	defense = x;
}

void Player::setSpeed(int x)
{
	speed = x;
}

void Player::setMoney(int x)
{
	money += x;
}

void Player::setClass(int x)
{
	switch (x) {
	case 0: playerClass = new Warrior();
	}
}

const string Player::getName()
{
	return name;
}

const int Player::getHealth()
{
	return health;
}

const int Player::getAttack()
{
	return attack;
}

const int Player::getDefense()
{
	return defense;
}

const int Player::getSpeed()
{
	return speed;
}

const int Player::getMoney()
{
	return money;
}

const int Player::getDefaultHealth()
{
	return DEFAULT_PLAYER_HEALTH;
}

const int Player::getDefaultAttack()
{
	return DEFAULT_PLAYER_ATTACK;
}

const int Player::getDefaultDefense()
{
	return DEFAULT_PLAYER_DEFENSE;
}

const int Player::getDefaultSpeed()
{
	return DEFAULT_PLAYER_SPEED;
}

ClassBase* Player::getClass()
{
	return playerClass;
}

const string Player::getClassName()
{
	return playerClass->getClassName();
}
