#pragma once
class Alive
{
protected:
	float maxLife;
	float currentLife;
public:
	Alive(float setLife);
	//virtual void Heal() = 0;
	virtual float GetCurrentLife() = 0;
	virtual void GetDamage(float damage) = 0;
};

