#include "Engine.h"

Engine::Engine()
{
	quit = false;
}

void Engine::setQuit(bool tempQuit)
{
	this->quit = tempQuit;
}

bool Engine::getQuit()
{
	return quit;
}

int Engine::checkQuit(string inputString)
{
	setQuit(true);
	if (inputString == "quit" || inputString == "Quit") {
		char input;

		while (quit) {
			cout << "\nAre you sure you want to quit? ('Y' for yes, 'N' for no)\n" << "Input: ";
			cin >> input;

			switch (input) {
			case 'Y':
			case 'y': {quitGame(); }
			case 'N':
			case 'n': {setQuit(false); return 1; }
			default: cout << "Not a valid option\n";
			}
		}
	}
	else { return 0; }
	
}

void Engine::quitGame()
{
	//Probably have other stuff here for saving before quitting
	exit(0);
}
