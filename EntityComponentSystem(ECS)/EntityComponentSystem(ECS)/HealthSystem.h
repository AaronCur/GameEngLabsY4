#pragma once
#include <iostream>
#include <vector>
#include "EntityComponent.h"
class HealthSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) {
		/*TBI*/
		entities.push_back(e);

	}
	void update() {
		std::cout << "HealthSystem Update" << std::endl;

		
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};