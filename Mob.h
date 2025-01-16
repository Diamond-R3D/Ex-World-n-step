#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "iostream"
class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float _x, float _y, float life, float dir_x, float dir_y, float _speed);
	virtual void GetDamage(float damage) override;
	virtual void Move(float _x,float _y, float brojX, float brojY) override;
	virtual float GetCurrentLife() override;
};

