#pragma once
#include <string>
#include <iostream>

using namespace std;

class Engine {

private:

	bool quit;

public:

	Engine();

	//Accessors and mutators for quit variable
	void setQuit(bool);
	bool getQuit();

	//Called everytime user is asked for input to check if they want to quit the game
	//Returns 0 for inputString equal to anything else than quit
	//Returns 1 if user decides not to quit
	int checkQuit(string);

	//Function that handles quitting the game
	void quitGame();
};