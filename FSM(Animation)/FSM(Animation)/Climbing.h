#pragma once
#include "State.h"
#include "Idle.h"

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a, SDL_Rect &destRect)
	{
		std::cout << "Going from Climbing to Idling" << std::endl;
		a->setCurrent(new Idle());
		destRect.y = 531.3;
		delete this;
	}
};