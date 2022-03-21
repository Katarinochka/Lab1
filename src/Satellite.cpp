#include "Satellite.h"
#include <iostream>
#include <stdlib.h>

TSatellite::TSatellite() : TSatellite(rand() % 200 + 10, rand() % 5000 + 10)
{
	naturalSatellite = false;
}

TSatellite::TSatellite(TSatellite& p)
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

TSatellite::TSatellite(double _weight, double _size) : TSolarSystem()
{
	SetWeight(_weight);
	SetSize(_size);
	naturalSatellite = false;
}

TSatellite::TSatellite(double w): TSatellite(w, 0)
{
}

TSatellite::TSatellite(TSatellite&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	naturalSatellite = p.naturalSatellite;
}

void TSatellite::Print()
{
	std::cout << "Satellite, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() <<"\t"<< ((naturalSatellite == true) ? "natural satellite" : "artificial satellite") << std::endl;
}

bool TSatellite::GetNaturalSatellite()
{
	return naturalSatellite;
}

void TSatellite::SetNaturalSatellite(bool n)
{
	naturalSatellite = n;
}

void TSatellite::Motion()
{
	weight -= 20;
}
