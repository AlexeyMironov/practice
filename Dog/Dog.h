#pragma once
#include "CFood.h"
#include <memory>

class CDog
{
public:
	CDog(float mass, float energy);
	//~CDog();
	void Eat(std::unique_ptr <CFood> food);
	void Flush();
	void Live(float time);
	bool IsAlive() const;
private:
	float m_mass, m_energy, m_foodMass;
};

