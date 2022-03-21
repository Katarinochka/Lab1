#include "Zoo.h"

TZoo::TZoo()
{
	planetCount = 0;
	planets = nullptr;
}

TZoo::~TZoo()
{
	if (planets!=nullptr)
		delete[]planets;
}

void TZoo::Print()
{
	for (int i = 0; i < planetCount; i++)
	{
		planets[i]->Print();
	}
}

void TZoo::AddPlanet(TSolarSystem* planet)
{
	if (planetCount == 0)
	{
		planets = new TSolarSystem * [1];
		planetCount = 1;
		planets[0] = planet;
	}
	else
	{
		TSolarSystem** tmp = new TSolarSystem*[planetCount + 1];
		for (int i = 0; i < planetCount; i++)
		{
			tmp[i] = planets[i];
		}
		delete[] planets;
		planets = tmp;
		planets[planetCount] = planet;
		planetCount++;
	}
}

