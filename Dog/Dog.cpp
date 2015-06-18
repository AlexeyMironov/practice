#include "Dog.h"
#include <algorithm>

CDog::CDog(float mass, float energy)
	:m_mass(mass), m_energy(energy), m_foodMass(0)
{
}


//CDog::~CDog()
//{
//}

void CDog::Eat(std::unique_ptr <CFood> food)
{
	if (!IsAlive())
	{
		return;
	}

	float consumedMass = m_foodMass + food->GetMass(); 
	if (consumedMass > m_mass * 0.05f)
	{
		consumedMass = m_mass * 0.05f;
	}
	consumedMass -= m_foodMass;  //съедено из данной порции
	
	m_foodMass += consumedMass;
	m_energy += consumedMass * food->GetEnergy();
}

void CDog::Flush()
{
	if (!IsAlive())
	{
		return;
	}
	m_foodMass = 0;
	m_energy -= m_energy * 0.1f;
}

void CDog::Live(float time)
{	
	if (!IsAlive())
	{
		return;
	}		
	m_energy -= m_mass * time * 1.0f;   // 1.0 - количество потребляемой энергии на кг массы собаки за 1 час
}

bool CDog::IsAlive() const
{
	return m_energy > 0;
}