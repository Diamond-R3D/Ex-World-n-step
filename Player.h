#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "iostream"
#include "IAttacker.h"
class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(float _x, float _y, float life, float dir_x, float dir_y, float _speed);
	virtual void GetDamage(float damage) override;
	virtual void Move(float _x, float _y, float brojX, float brojY) override;
	virtual void Attack(Alive* Alive) override;
	virtual float GetCurrentLife() override;
};

