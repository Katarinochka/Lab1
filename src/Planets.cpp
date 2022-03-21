#include "Planets.h"
#include <stdlib.h>
#include <iostream>

TPlanets::TPlanets() : TPlanets(rand() % 100 +10, rand() % 10000 +10)
{
	giantPlanet = false;
}

TPlanets::TPlanets(TPlanets& p)
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

TPlanets::TPlanets(double _weight, double _size) : TSolarSystem()
{
	SetWeight(_weight);
	SetSize(_size);
	giantPlanet = false;
}

TPlanets::TPlanets(double w) : TPlanets(w, 0)
{
}

TPlanets::TPlanets(TPlanets&& p)
{
	weight = p.weight;
	size = p.size;

	colorCount = p.colorCount;
	color = p.color;
	p.color = 0;
	p.colorCount = 0;
	giantPlanet = p.giantPlanet;
}

void TPlanets::Print()
{
	std::cout << "Planet, size = \t" << this->GetSize() << "\t Weight = \t" << this->GetWeight() << "\t" << ((giantPlanet == true) ? "giant planet" : "ordinary planet") << std::endl;
}

bool TPlanets::GetGiantPlanet()
{
	return giantPlanet;
}

void TPlanets::SetGiantPlanet(bool n)
{
	giantPlanet = n;
}

void TPlanets::Motion()
{
	weight -= 10;
}

