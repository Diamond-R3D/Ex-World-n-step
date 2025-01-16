#pragma once
#include "Alive.h"
class IAttacker
{
public:
	virtual void Attack(Alive* Alive)=0;
};

