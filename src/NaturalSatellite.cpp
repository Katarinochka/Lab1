#include "NaturalSatellite.h"
#include <iostream>
#include <stdlib.h>

TNaturalSatellite::TNaturalSatellite() : TNaturalSatellite(rand() % 200 + 10, rand() % 5000 + 10)
{
	naturalSatellite = false;
}

TNaturalSatellite::TNaturalSatellite(TNaturalSatellite& p)
{
	weight = p.weight;
	size = p.size;
	colorCount = p.colorCount;
	color = new int[colorCount];
	for (int i = 0; i < colorCount; i++)
	{
		color[i] = p.color[i];
	}
	naturalSatellite = p.naturalSatellite;
}

TNaturalSatellite::TNaturalSatellite(double _weight, double _size) : TSatellite()
{
	SetWeight(_weight);
	SetSize(_size);
	naturalSatellite = false;
}

TNaturalSatellite::TNaturalSatellite(double w) : TNaturalSatellite(w, 0)
{
}

TNaturalSatellite::TNaturalSatellite(TNaturalSatellite&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	naturalSatellite = p.naturalSatellite;
}

void TNaturalSatellite::Print()
{
	std::cout << "Natural Satellite, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() << "\t" <<  std::endl;
}

bool TNaturalSatellite::GetNaturalSatellite()
{
	return naturalSatellite;
}

void TNaturalSatellite::SetNaturalSatellite(bool n)
{
	naturalSatellite = n;
}

void TNaturalSatellite::Motion()
{
	weight -= 20;
}