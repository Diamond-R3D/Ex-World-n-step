#pragma once
#include "Entity.h"
#include "Alive.h"
#include "iostream"
class BreakableObject : public Entity, public Alive
{
public:
	void GetDamage(float damage) override;
	BreakableObject(float _x, float _y, float life);
	virtual float GetCurrentLife() override;
};

