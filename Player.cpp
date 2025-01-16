#include "Player.h"

Player::Player(float _x, float _y, float life, float dir_x, float dir_y, float _speed) : Entity(_x, _y), Alive(life), AMovable(dir_x, dir_y, _speed)
{
	x = _x;
	y = _y;
	maxLife = life;
	currentLife = maxLife;
	direction[0] = dir_x;
	direction[1] = dir_y;
	std::cout << "Player just created at x = " << x << " and y = " << y << " with " << life << " life with direction x = " << dir_x << " and y = " << dir_y << std::endl;
}

void Player::GetDamage(float damage)
{
	currentLife -= damage;
	if (currentLife <= 0)
		std::cout << "Player just died" << std::endl;
}
void Player::Move(float _x, float _y, float brojX, float brojY)
{
	if (direction[0] < brojX && brojX > x)
	{
		x += direction[0];
	}
	if (direction[1] < brojY && brojY > y)
	{
			y += direction[1];
	}
	if (y > brojY)
		y = brojY;
	if (x > brojX)
		x = brojX;
	std::cout << "Player moved to x = " << x << " and y = " << y << std::endl;
}

void Player::Attack(Alive* Alive)
{
	std::cout << "Player just attacked" << std::endl;
	Alive->GetDamage(10);
}

float Player::GetCurrentLife()
{
	return currentLife;
}
