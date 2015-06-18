#include "Bread.h"

const float breadEnergyDensity = 2.5;

CBread::CBread(float mass)
	:CFood(mass, breadEnergyDensity)
{
}


CBread::~CBread()
{
}
