#include "RenderSystem.h"

RenderSystem::RenderSystem() {

}

void RenderSystem::addEntity(Entity* e) {
	m_entities.push_back(e);
}

void RenderSystem::update() {
	int index = 0;

	cout << "RENDER SYSTEM:" << endl;
	for (Entity * entity : m_entities) {

		//Render texture to screen
		for (Component * component : entity->getComponents()) {
			if (component->id = 2) {
				cout << "Checking position component of entity " << index << endl;
			}

		}
		cout << "Drawing entity " << index << endl;

		index++;
	}
	cout << endl;
	cout << endl;

}