#include "GameObject.h"

GameObject(Simulation * simulation, Vector2D position) :simulation(simulation), position(position) 
{}

GameObject(Simulation * simulation) :simulation(simulation) 
{
	isDestroyed = false;
}

virtual void update() 
{}

virtual void start()
{}

virtual char getImage() 
{
	return '?';
}

Vector2D getPosition() 
{
	return position;
}

void setPosition(Vector2D position) 
{
	this->position = position;
}

bool isObjectDestroyed() 
{
	return isDestroyed;
}

void destroy() 
{
	isDestroyed = true;
}