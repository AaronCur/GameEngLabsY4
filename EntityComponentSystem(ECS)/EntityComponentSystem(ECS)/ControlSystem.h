#pragma once
#include <iostream>
#include <vector>
#include "EntityComponent.h"
#include "SDL.h"

class ControlSystem
{
	std::vector<Entity> m_entities;

public:
	ControlSystem();
	void addEntity(Entity e);
	void update(SDL_Event & e);
};