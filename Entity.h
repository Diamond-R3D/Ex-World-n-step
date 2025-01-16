#pragma once
#include "Vector2.h"
class Entity : public Vector2
{
protected:
	float position[2];
public:
	Entity(float _x,float _y);
	void Setpos();
	virtual void SetX(float _x) override;
	virtual void SetY(float _y) override;
	virtual float GetX() override;
	virtual float GetY() override;
};

