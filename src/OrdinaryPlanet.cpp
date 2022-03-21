#include "OrdinaryPlanet.h"
#include <iostream>
#include <stdlib.h>

TOrdinaryPlanet::TOrdinaryPlanet() : TOrdinaryPlanet(rand() % 200 + 10, rand() % 5000 + 10)
{
	ordinaryPlanet = false;
}

TOrdinaryPlanet::TOrdinaryPlanet(TOrdinaryPlanet& p)
{
	weight = p.weight;
	size = p.size;
	colorCount = p.colorCount;
	color = new int[colorCount];
	for (int i = 0; i < colorCount; i++)
	{
		color[i] = p.color[i];
	}
	ordinaryPlanet = p.ordinaryPlanet;
}

TOrdinaryPlanet::TOrdinaryPlanet(double _weight, double _size) : TPlanets()
{
	SetWeight(_weight);
	SetSize(_size);
	ordinaryPlanet = false;
}

TOrdinaryPlanet::TOrdinaryPlanet(double w) : TOrdinaryPlanet(w, 0)
{
}


TOrdinaryPlanet::TOrdinaryPlanet(TOrdinaryPlanet&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	ordinaryPlanet = p.ordinaryPlanet;
}

void TOrdinaryPlanet::Print()
{
	std::cout << "Ordinary Planet, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() << "\t" << std::endl;
}

bool TOrdinaryPlanet::GetOrdinaryPlanet()
{
	return ordinaryPlanet;
}

void TOrdinaryPlanet::SetOrdinaryPlanet(bool n)
{
	ordinaryPlanet = n;
}

void TOrdinaryPlanet::Motion()
{
	weight -= 20;
}