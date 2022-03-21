#pragma once
#include "Satellite.h"
class TNaturalSatellite : public TSatellite
{
public:
	TNaturalSatellite();
	TNaturalSatellite(TNaturalSatellite& p);
	TNaturalSatellite(double _weight, double _size);
	TNaturalSatellite(double w);

	TNaturalSatellite(TNaturalSatellite&& p);

	virtual void Print();
	bool GetNaturalSatellite();
	void SetNaturalSatellite(bool n);
	void Motion();

protected:

	bool naturalSatellite;
};

