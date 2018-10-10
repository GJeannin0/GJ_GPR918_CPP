#ifndef GameObject
#define GameObject

class GameObject
{
public:
	GameObject::GameObject(Simulation * simulation, Vector2D position);

	GameObject::GameObject(Simulation * simulation) :simulation(simulation);

	virtual void GameObject::update();

	virtual void GameObject::start();

	virtual char GameObject::getImage();

	Vector2D GameObject::getPosition();

	void GameObject::setPosition(Vector2D position);

	bool GameObject::isObjectDestroyed();

	void GameObject::destroy();

protected:
	Vector2D position;
	Simulation * simulation;
	bool isDestroyed;

};
#endif // GameObject

