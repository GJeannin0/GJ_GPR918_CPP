#include "Food.h"

	Food(Simulation * simulation) :GameObject(simulation)
	{}

	char getImage()
	{
		return 'F';
	}
};
