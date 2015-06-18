#include "CFood.h"


CFood::CFood(float mass, float energyDensity)
	:m_mass(mass), m_energyDensity(energyDensity)
{
}

//CFood::CFood(CFood && food)
//: m_mass(food.m_mass), m_energyDensity(food.m_energyDensity)
//{
//	food.m_energyDensity = 0;
//	food.m_mass = 0;
//}

CFood::~CFood()
{
}

float CFood::GetMass() const
{
	return m_mass;
}

float CFood::GetEnergy() const
{
	return m_energyDensity;
}
