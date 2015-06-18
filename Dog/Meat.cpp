#include "Meat.h"
const float meatEnergyDensity = 3.0;

CMeat::CMeat(float mass)
	:CFood(mass, meatEnergyDensity)
{
}

CMeat::~CMeat()
{
}
