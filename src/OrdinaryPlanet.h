#pragma once
#include "Planets.h"
class TOrdinaryPlanet : public TPlanets
{
public:
	TOrdinaryPlanet();
	TOrdinaryPlanet(TOrdinaryPlanet& p);
	TOrdinaryPlanet(double _weight, double _size);
	TOrdinaryPlanet(double w);

	TOrdinaryPlanet(TPlanets&& p);

	virtual void Print();
	bool GetOrdinaryPlanet();
	void SetOrdinaryPlanet(bool n);
	void Motion();

protected:

	bool ordinaryPlanet;

};