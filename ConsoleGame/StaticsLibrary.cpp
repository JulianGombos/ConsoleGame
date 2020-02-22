#include "StaticsLibrary.h"
#include "Engine.h"
#include <iostream>

void Statics::pause()
{
	cout << "Press any key to continue...\n";
	cin.ignore();
	cin.get();
}

void Statics::pause(string displayMessage)
{
	cout << displayMessage << endl;
	cin.ignore();
	cin.get();
}

void Statics::clearScreen()
{
	system("CLS"); //Function from stdlib that clears the console screen and resets cursor to top left
}
