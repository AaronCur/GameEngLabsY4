#pragma once
#pragma once
#include <iostream>
#include <vector>
#include "EntityComponent.h"
class PositionSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) {
		/*TBI*/
	}
	void update() {
		std::cout << "PositionSystem Update" << std::endl;

		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};