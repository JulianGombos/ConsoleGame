#include "GlobalResources.h"

Global::Global()
{
	quit = false;
}

void Global::setQuit(bool tempQuit)
{
	quit = tempQuit;
}

bool Global::getQuit()
{
	return quit;
}
