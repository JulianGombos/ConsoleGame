//C++ library includes
#include <iostream>
#include <math.h>
#include <conio.h>	
#include <stdlib.h>
#include <string>
#include <fstream>

//User defined class includes
#include "player.h"
#include "Shop.h"

//User defined library full of static functions
#include "StaticsLibrary.h"

//User defined global resources
#include "GlobalResources.h"

//User defined features related to the engine of the game
#include "Engine.h"

using namespace std;

//Functions that handles all initial startup events when game is launched
Player* startup();

//Function that imports and prints title screen to console
void titleScreen(); 

//Function that handles character creation setup
Player* characterCreation();

//Function adds some default items to the player's inventory. Currently those items are based on the warrior class
void addDefaultGameItems(Player*, Shop*);

//Function displays introduction story
void intro();

//Initializing the engine
Engine* engine = new Engine();

int main() {

	Player* player;
	Shop* gameShop = new Shop();

	//player = startup();
	player = new Player(startup());
	addDefaultGameItems(player, gameShop);

	

	Statics::pause();

	//Main game loop
	//Realistically, there probably wont be a game loop. Everything is going to follow a particular order.
	//The only "game loops" there will be are for battles since combat will constantly loop until its over
	while (!engine->getQuit()) {
		



	}
	





	Statics::pause("Press any key to exit the game...");
	return 0;
}

Player* startup()
{
	Statics::clearScreen();
	titleScreen();
	intro(); //This needs to be cleaned up when the story has been thought out
	return characterCreation();
}

void titleScreen()
{
	string titleScreenNameArray[7];
	string fileInput;

	ifstream iFile ("TitleScreenName.txt");

	if (iFile.is_open())
	{
		int i = 0;
		while (getline(iFile, fileInput))
		{
			titleScreenNameArray[i] = fileInput;
			i++;
		}
		iFile.close();
	}
	else cout << "Unable to open file: TitleScreenName.txt";

	for (int i = 0; i < 7; i++) {
		cout << titleScreenNameArray[i] << endl;
	}

	cout << "\n**Remember you can quit at any time by typing 'quit' when prompted for input**\n";

	Statics::pause("\nPress any key to start the game!");
}

Player* characterCreation()
{
	string name, classSelection;

	Statics::clearScreen();
	cout << "We would like to know some more about you.\n";
	
	do {
		cout << "Please adventurer, tell us your name?\n" << "Input: ";
		cin >> name;
	} while (engine->checkQuit(name));
	
	Player* tempPlayer = new Player(name);
	cout << "That is a fine name!\n";

	bool validClass = false;
	while (!validClass) {

		do {
			cout << "\nAdventurer, what role would you like to train in?\n" << "W = Warrior\n" << "Input: ";
			cin >> classSelection;
		} while (engine->checkQuit(classSelection));
		
		switch (classSelection.at(0)) {
		case 'W':
		case 'w': {
			tempPlayer->setClass(0);
			validClass = true; 
			break;
		}
		default: cout << "\nNot a class option\n";
		}
	}
	tempPlayer->setHealth(tempPlayer->getDefaultHealth() * tempPlayer->getClass()->getHealthModifier());
	tempPlayer->setAttack(tempPlayer->getDefaultAttack() * tempPlayer->getClass()->getAttackModifier());
	tempPlayer->setDefense(tempPlayer->getDefaultDefense() * tempPlayer->getClass()->getDefenseModifier());
	tempPlayer->setSpeed(tempPlayer->getDefaultSpeed() * tempPlayer->getClass()->getSpeedModifier());
	tempPlayer->setMoney(1000);
	return tempPlayer;

}

void addDefaultGameItems(Player* player, Shop* shop)
{
	player->getPlayerInventory()->addItem(shop->getBuyItem(0));
	player->getPlayerInventory()->addItem(shop->getBuyItem(21));
	player->getPlayerInventory()->addItem(shop->getBuyItem(27));
	player->getPlayerInventory()->addItem(shop->getBuyItem(27));
}

void intro()
{
	Statics::clearScreen();

	cout << "Insert some fancy introduction to the story of the game here. Probably should start thinking about the story\n" <<
		"and what its actually going to be. After this introduction, it will direct the player to character customization.\n";
	Statics::pause("\nPress any key to continue to character customization...");
}
