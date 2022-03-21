#pragma once
#include "SolarSystem.h"
class TSatellite : public TSolarSystem
{
public:
	TSatellite();
	TSatellite(TSatellite& p);
	TSatellite(double _weight, double _size);
	TSatellite(double w);

	TSatellite(TSatellite&& p);

	virtual void Print();
	bool GetNaturalSatellite();
	void SetNaturalSatellite(bool n);
	void Motion();

protected:

	bool naturalSatellite;

};