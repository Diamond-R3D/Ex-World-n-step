#pragma once
class Vector2
{
protected:
	float x;
	float y;
public:
	virtual void SetX( float _x);
	virtual void SetY(float _y);
	virtual float GetX();
	virtual float GetY();
};

