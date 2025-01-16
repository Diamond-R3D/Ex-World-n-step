#pragma once
#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <vector>
class World
{
	std::vector<Entity*> Entities;
public:
	float mobTargetX;
	float mobTargetY;
	float TargetX;
	float TargetY;
	float brojlife;
	float moblife;
	bool triggertarget;
	bool mobTriggertarget;
	float playerDamage;
	void Init();
	bool Step();
};

