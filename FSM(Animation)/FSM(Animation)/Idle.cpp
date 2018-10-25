#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

void Idle::jumping(Animation* a, SDL_Rect &destRect)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Jumping());
	destRect.y = 0;
	delete this;
}

void Idle::climbing(Animation* a, SDL_Rect &destRect)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Climbing());
	destRect.y = 265.6;
	delete this;
}