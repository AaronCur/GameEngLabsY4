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
		//std::cout << "HealthSystem Update" << std::endl;

		/* HealthComponents and Update */
		/* Loop through Entities with */
		for (Entity & entity : entities) {

			//Loop through all entities 
			for (Component * component : entity.getComponents()) {
				//only update health components
				if (component->getID() == 1)
				{
					//Get current health

					int healthVal = dynamic_cast<HealthComponent*>(component)->getHealth();
					healthVal = healthVal - 1;
					////Update health value of health component
					dynamic_cast<HealthComponent*>(component)->setHealth(healthVal);

					std::cout << "Updated entity health component" << std::endl;

				}
			}
		}
		
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};