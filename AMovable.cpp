#include "AMovable.h"

AMovable::AMovable(float dir_x, float dir_y, float _speed)
{
	direction[0] = dir_x;
	direction[1] = dir_y;
	speed = _speed;
}
