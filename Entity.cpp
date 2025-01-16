#include "Entity.h"

Entity::Entity(float _x, float _y)
{
	position[0] =_x;
	position[1] =_y;
}

void Entity::Setpos()
{
}

void Entity::SetX(float _x)
{
	position[0] = _x;
}

void Entity::SetY(float _y)
{
	position[1] = _y;
}

float Entity::GetX()
{
	return x;
}

float Entity::GetY()
{
	return y;
}
