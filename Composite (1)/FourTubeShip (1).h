#pragma once
#include "Unit.h"

class FourTubeShip:public Unit
{
public:

	FourTubeShip()
	{
	}

	virtual ~FourTubeShip()
	{
	}
public:
	int GetPower() const
	{
		cout << "4 ";
		return 4;
	}
	void AddUnit(Unit* p)
	{
		throw "This operation is not supported!";
	}
};

