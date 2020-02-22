#include "ClassBase.h"

ClassBase::ClassBase()
{
	healthModifier = 0;
	attackModifier = 0;
	defenseModifier = 0;
	speedModifier = 0;
}

ClassBase::ClassBase(int tempHealth, int tempAttack, int tempDefense, int tempSpeed)
{
	healthModifier = tempHealth;
	attackModifier = tempAttack;
	defenseModifier = tempDefense;
	speedModifier = tempSpeed;
}

ClassBase::~ClassBase()
{
}
