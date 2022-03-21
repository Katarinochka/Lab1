#pragma once
#include "SolarSystem.h"
class TPlanets : public TSolarSystem
{
public:
	TPlanets();
	TPlanets(TPlanets& p);
	TPlanets(double _weight, double _size);
	TPlanets(double w);

	TPlanets(TPlanets&& p);

	virtual void Print();
	bool GetGiantPlanet();
	void SetGiantPlanet(bool n);
	void Motion();

protected:

	bool giantPlanet;

};