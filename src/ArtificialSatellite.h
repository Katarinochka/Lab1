#pragma once
#include "Satellite.h"
class TArtificialSatellite : public TSatellite
{
public:
	TArtificialSatellite();
	TArtificialSatellite(TArtificialSatellite& p);
	TArtificialSatellite(double _weight, double _size);
	TArtificialSatellite(double w);

	TArtificialSatellite(TArtificialSatellite&& p);

	virtual void Print();
	bool GetArtificialSatellite();
	void SetArtificialSatellite(bool n);
	void Motion();

protected:

	bool artificialSatellite;
};
