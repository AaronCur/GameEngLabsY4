#pragma once
#include "State.h"
#include "Idle.h"

class Jumping: public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a, SDL_Rect &destRect)
	{
		std::cout << "Going from Jumping to Idling" << std::endl;
		a->setCurrent(new Idle());
		destRect.y = 531.3;
		delete this;
	}
};