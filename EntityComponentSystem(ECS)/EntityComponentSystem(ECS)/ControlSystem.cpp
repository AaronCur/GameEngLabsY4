#include "ControlSystem.h"

ControlSystem::ControlSystem() {

}

void ControlSystem::addEntity(Entity e) {
	entities.push_back(e);
}

void ControlSystem::input(SDL_Event & event) {
	
	for (Entity& entity : entities) {
		for (Component* component : entity.getComponents()) {
			if (component->getID() == 3) {
				controlComp = dynamic_cast<ControlComponent*>(component);
				switch (event.type) {
				case SDL_KEYDOWN:
					switch (event.key.keysym.sym)
					{
					case SDLK_UP:
						controlComp->setDirection(controlComp->Up);
						break;
					case SDLK_DOWN:
						controlComp->setDirection(controlComp->Down);
						break;
					case SDLK_LEFT:
						controlComp->setDirection(controlComp->Left);
						break;
					case SDLK_RIGHT:
						controlComp->setDirection(controlComp->Right);
						break;
					default:
						controlComp->setDirection(controlComp->Idle);
						break;
					}
				
				}
			}
		}
	}
}


void ControlSystem::update(SDL_Event & e) {
	


	for (Entity& entity : entities) {

		for (Component* component : entity.getComponents()) {
			if (component->getID() == 2) {

				posComp = dynamic_cast<PositionComponent*>(component);
			}
			else if (component->getID() == 3)
			{
				controlComp = dynamic_cast<ControlComponent*>(component);

			}
		}

		x = posComp->getPositionX();
		y = posComp->getPositionY();

		input(e);
		if (controlComp->getDirection() == controlComp->Up) {
			y -= speed;
		}

		if (controlComp->getDirection() == controlComp->Down) {
			y += speed;
		}

		if (controlComp->getDirection() == controlComp->Right) {
			x += speed;
		}

		if (controlComp->getDirection() == controlComp->Left) {
			x -= speed;
		}
		posComp->setPosition(x, y);
		

		/*switch (controlComp->m_currentDirection) {
		case Direction::Up:
			y -= speed;
			break;
		case Direction::Down:
			y+= speed
			break;
		case Direction::Left:
			
			break;
		case Direction::Right:
			controlComp->setDirection(controlComp->Right);
			break;
		default:
			controlComp->setDirection(controlComp->Idle);
			break;*/

		
	}
}