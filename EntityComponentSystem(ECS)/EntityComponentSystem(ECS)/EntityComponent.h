#pragma once
#include <vector>
#include "Component.h"
class Entity
{
	int id;
public:
	Entity() {};
	void addComponent(Component c) {

	}
	void removeComponent(Component c) {
		/*TBI*/
	}
	std::vector<Component> getComponents() {

		return components;
	}
private:
	std::vector<Component> components;
};