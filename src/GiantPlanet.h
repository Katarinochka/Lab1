#pragma once
#include "Planets.h"
class TGiantPlanet : public TPlanets
{
public:
	TGiantPlanet();
	TGiantPlanet(TGiantPlanet& p);
	TGiantPlanet(double _weight, double _size);
	TGiantPlanet(double w);

	TGiantPlanet(TPlanets&& p);

	virtual void Print();
	bool GetGiantPlanet();
	void SetGiantPlanet(bool n);
	void Motion();

protected:

	bool giantPlanet;

};