#pragma once
class CFood
{
public:
	CFood(float mass, float energyDensity);
	//CFood(CFood && food);
	virtual ~CFood();
	float GetMass() const;
	float GetEnergy() const;
private:
	float m_mass, m_energyDensity;
};

