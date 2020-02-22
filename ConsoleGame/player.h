#pragma once
#include <string>

#include "ClassBase.h"
#include "Warrior.h"
#include "Inventory.h"

using namespace std;

class Player {

private:

	const int DEFAULT_PLAYER_HEALTH = 10;
	const int DEFAULT_PLAYER_ATTACK = 10;
	const int DEFAULT_PLAYER_DEFENSE = 10;
	const int DEFAULT_PLAYER_SPEED = 10;

	string name;
	int health, attack, defense, speed, money;
	ClassBase* playerClass;
	Inventory* playerInventory;

public:

	Player();
	Player(Player*);
	Player(string);
	Player(string, int); //This can be expanded if more player defined properties are created that are set up in character creation
	~Player();

	//Mutators for player stats
	void setHealth(int);
	void setAttack(int);
	void setDefense(int);
	void setSpeed(int);
	void setMoney(int);

	//Mutator for player class
	void setClass(int);

	//Accessor for player name
	const string getName();

	//Accessors for current player stats
	const int getHealth();
	const int getAttack();
	const int getDefense();
	const int getSpeed();
	const int getMoney();

	//Accessors for default player stats
	const int getDefaultHealth();
	const int getDefaultAttack();
	const int getDefaultDefense();
	const int getDefaultSpeed();

	//Accessor for player inventory
	Inventory* getPlayerInventory();

	//Accessor for player class
	ClassBase* getClass();

	//Accessor for player class name
	const string getClassName();

};
