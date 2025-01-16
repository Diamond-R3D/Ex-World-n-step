#include "StaticObject.h"

StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y)
{
	x = _x;
	y = _y;
	std::cout << "Static Object just created at x = " << x << " and y = " << y << std::endl;
}
