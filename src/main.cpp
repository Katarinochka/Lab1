#include <iostream>
#include <stdlib.h>
#include "SolarSystem.h"
#include "Satellite.h"
#include "Planets.h"
#include "Zoo.h"
#include "NaturalSatellite.h"
#include "ArtificialSatellite.h"
#include "GiantPlanet.h"
#include "OrdinaryPlanet.h"

int main(int argc, char** argv)
{
	bool f = true;
	int a = 10;
	int& a1 = a;

	TSatellite satellite1;
	satellite1.SetSize(3476);
	satellite1.SetWeight(735*(10^20));

	TSatellite satellite2 = satellite1;

	/*TSatellite& planet21 = satellite2;*/

	TSatellite satellite3(735*(10^20), 3476);
	satellite3.SetNaturalSatellite(true);
	TSatellite planet4 = 4.5;
	satellite3.Print();

	TNaturalSatellite naturalSatellite1(735 * (10 ^ 20), 3476);
	naturalSatellite1.Print();

	TArtificialSatellite artificialSatellite1(1924, 67);
	artificialSatellite1.Print();

	TPlanets planet1;
	planet1.Print();

	TGiantPlanet planet2 (35789, 356718943);
	planet2.Print();

	TOrdinaryPlanet planet3(6483,741246);
	planet3.Print();

	TSolarSystem* planet5 = new TSatellite(3.85);
	TSolarSystem* sun2 = new TPlanets();
	/*planet5->Print();
	sun2->Print();*/

	satellite3.Motion();
	planet1.Motion();
	planet5->Motion();
	sun2->Motion();

	std::cout << "\n" << std::endl;

	TZoo zoo;
	zoo.AddPlanet(&satellite3);
	zoo.AddPlanet(&planet1);
	zoo.AddPlanet(planet5);
	zoo.AddPlanet(sun2);
	zoo.Print();
	delete planet5;
	delete sun2;

	std::cout << "\n" << std::endl;

	return 0;
}