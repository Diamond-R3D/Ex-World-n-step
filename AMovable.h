#pragma once
class AMovable
{
protected:
	float direction[2];
	float speed;
public:
	AMovable(float dir_x, float dir_y, float _speed);
	//virtual float SetDirection(float dir_x, float dir_y) = 0;
	//virtual float SetSpd(float _spd) = 0;
	virtual void Move(float _x, float _y, float brojX, float brojY) = 0;
};