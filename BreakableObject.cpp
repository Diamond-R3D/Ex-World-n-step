#include "BreakableObject.h"

void BreakableObject::GetDamage(float damage)
{
	currentLife -= damage;
	if (currentLife <= 0)
		std::cout << "Breakable Object just broke" << std::endl;
}

BreakableObject::BreakableObject(float _x, float _y, float life) : Entity( _x,  _y), Alive(life)
{
	x = _x;
	y = _y;
	maxLife = life;
	currentLife = maxLife;
	std::cout << "Breakable Object just created at x = " << x << " and y = " << y << std::endl;
}

float BreakableObject::GetCurrentLife()
{
	return currentLife;
}
