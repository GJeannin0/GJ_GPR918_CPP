#include "GameObjectBuilder.h"

Creature *  GameObjectBuilder::buildCreature(Simulation & simulation) 
{
	Creature* creature = new Creature(&simulation, 20);

	int x = simulation.getValueRandom(0, MAP_SIZE - 1);
	int y = simulation.getValueRandom(0, MAP_SIZE - 1);

	creature->setPosition(Vector2D(x, y));

	return creature;
}

Food * GameObjectBuilder::buildFood(Simulation & simulation) 
{
	Food* food = new Food(&simulation);

	int x = simulation.getValueRandom(0, MAP_SIZE - 1);
	int y = simulation.getValueRandom(0, MAP_SIZE - 1);

	food->setPosition(Vector2D(x, y));

	return food;
}