#pragma once
#include "SolarSystem.h"
class TZoo
{
public:
	TZoo();
	~TZoo();
	void Print();
	void AddPlanet(TSolarSystem* planet);

private:
	TSolarSystem** planets;
	int planetCount;

};

