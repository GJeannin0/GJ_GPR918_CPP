#include <array>
#include <list>
#include <vector>
#include <iostream>

#ifndef Map
#define Map

class Map
{
public:
	map();

	bool AddGameObjectAt(GameObject * gameObject);

	bool AddGameObjectAt(GameObject * gameObject, int positionX, int positionY);

	GameObject & getContentAtPosition(Vector2D position);

	template<typename T> bool gameObjectOfTypeExistAt(Vector2D position);		
	
	bool gameObjectExistAt(Vector2D position);

	bool RemoveObjectAt(Vector2D position);

	bool MoveGameObjetTo(GameObject & gameObject, int positionX, int positionY);

	void update();

	void DisplayMap();

	int countCreaturesInMap();

private:
	std::array<std::array<GameObject*, MAP_SIZE>, MAP_SIZE> map;
	std::list<GameObject * > gameObjectsForUpdate;
};

#endif // !map

