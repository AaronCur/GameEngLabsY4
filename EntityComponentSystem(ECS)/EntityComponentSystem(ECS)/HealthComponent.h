#pragma once
#include <vector>
#include "Component.h"
class HealthComponent: public Component
{
	int id;
public:
	HealthComponent() : health(100) {};

	/*Data only*/
	int getHealth() {
		return health;
	}

	void setHealth(int health) {
		this->health = health;
	}
private:
	int health;
};