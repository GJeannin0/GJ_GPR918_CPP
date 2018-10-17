#include <random>

#ifndef Simulation
#define Simulation

#include "map.h"

class Simulation 
{
public:
	Map map();
	Simulation(int seed);

	void init();
	void star();
	int getValueRandom(int min, int max);

private:
	int nbrCreatures;
	int nbrHunters;
	int nbrFoodStuff;

	std::default_random_engine random;

	void update();
	bool isEndSimulation();
}
#endif // !Simulation
