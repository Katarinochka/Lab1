#include "ArtificialSatellite.h"
#include <iostream>
#include <stdlib.h>

TArtificialSatellite::TArtificialSatellite() : TArtificialSatellite(rand() % 200 + 10, rand() % 5000 + 10)
{
	artificialSatellite = false;
}

TArtificialSatellite::TArtificialSatellite(TArtificialSatellite& p)
{
	weight = p.weight;
	size = p.size;
	colorCount = p.colorCount;
	color = new int[colorCount];
	for (int i = 0; i < colorCount; i++)
	{
		color[i] = p.color[i];
	}
	artificialSatellite = p.artificialSatellite;
}

TArtificialSatellite::TArtificialSatellite(double _weight, double _size) : TSatellite()
{
	SetWeight(_weight);
	SetSize(_size);
	artificialSatellite = false;
}

TArtificialSatellite::TArtificialSatellite(double w) : TArtificialSatellite(w, 0)
{
}

TArtificialSatellite::TArtificialSatellite(TArtificialSatellite&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	artificialSatellite = p.artificialSatellite;
}

void TArtificialSatellite::Print()
{
	std::cout << "Artificial Satellite, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() << "\t" << std::endl;
}

bool TArtificialSatellite::GetArtificialSatellite()
{
	return artificialSatellite;
}

void TArtificialSatellite::SetArtificialSatellite(bool n)
{
	artificialSatellite = n;
}

void TArtificialSatellite::Motion()
{
	weight -= 20;
}