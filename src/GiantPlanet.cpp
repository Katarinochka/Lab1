#include "GiantPlanet.h"
#include <iostream>
#include <stdlib.h>

TGiantPlanet::TGiantPlanet() : TGiantPlanet(rand() % 200 + 10, rand() % 5000 + 10)
{
	giantPlanet = false;
}

TGiantPlanet::TGiantPlanet(TGiantPlanet& p)
{
	weight = p.weight;
	size = p.size;
	colorCount = p.colorCount;
	color = new int[colorCount];
	for (int i = 0; i < colorCount; i++)
	{
		color[i] = p.color[i];
	}
	giantPlanet = p.giantPlanet;
}

TGiantPlanet::TGiantPlanet(double _weight, double _size) : TPlanets()
{
	SetWeight(_weight);
	SetSize(_size);
	giantPlanet = false;
}

TGiantPlanet::TGiantPlanet(double w) : TGiantPlanet(w, 0)
{
}


TGiantPlanet::TGiantPlanet(TGiantPlanet&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	giantPlanet = p.giantPlanet;
}

void TGiantPlanet::Print()
{
	std::cout << "Giant Planet, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() << "\t" << std::endl;
}

bool TGiantPlanet::GetGiantPlanet()
{
	return giantPlanet;
}

void TGiantPlanet::SetGiantPlanet(bool n)
{
	giantPlanet = n;
}

void TGiantPlanet::Motion()
{
	weight -= 20;
}