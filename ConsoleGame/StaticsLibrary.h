#pragma once
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Statics {

public:

	//Pauses program and waits for next input to continue
	static void pause();

	//Overload of pause function which allows for a custom message to be displayed to screen when waiting for pause
	static void pause(string);

	//Clears the console screen and resets cursor to top left
	static void clearScreen();

};
