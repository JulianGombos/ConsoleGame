#pragma once

class Global {

private:

	//This bool controls the main game loop. Used to terminate the program
	bool quit;

public:

	Global();

	void setQuit(bool);
	bool getQuit();

};
