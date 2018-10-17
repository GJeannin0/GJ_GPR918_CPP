#include "Vector2d.h"

#ifndef Creature
#define Creature

class Creature : public GameObject
{
public:

	Creature::Creature(Simulation * simulation, int hungerSpeedIncrement) :GameObject(simulation);

	void Creature::update();
	char Creature::getImage();


private:

	int hungerPourcent;
	int hungerSpeedIncrement;

	Vector2D Creature::findnearbyFoodPosition();

	Vector2D Creature::findnearbyCreaturePosition();

	void Creature::randomMove();
	void Creature::die();

	void incrementHunger();
};

#endif // !Creature
