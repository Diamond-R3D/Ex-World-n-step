#include <iostream>

#include "World.h"
int main()
{
	World world;
	world.Init();
	do {} while (world.Step()==true);
}