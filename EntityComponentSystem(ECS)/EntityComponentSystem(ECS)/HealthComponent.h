#pragma once
#include <vector>
#include "Component.h"
class HealthComponent: public Component
{
	
public:
	HealthComponent() : health(100) {};

	/*Data only*/
	int getHealth() {
		return health;
	}

	void setHealth(int health) {
		this->health = health;
		std::cout << this->health << std::endl;
	}
	int getID()
	{
		return id;
	}
private:
	int health;
	int id = 1;
};