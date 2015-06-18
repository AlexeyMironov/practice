#pragma once
#include "CFood.h"
class CMeat final :
	public CFood
{
public:
	CMeat(float mass);
	~CMeat();
};

