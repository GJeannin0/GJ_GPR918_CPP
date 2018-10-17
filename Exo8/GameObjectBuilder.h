#pragma once

#ifndef GameObjectBuilder
#define GameObjectBuilder

class  GameObjectBuilder 
{
public:
	static Creature * buildCreature(Simulation & simulation);
	static Food * buildFood(Simulation & simulation);
};

#endif // !GameObjectBuilder
