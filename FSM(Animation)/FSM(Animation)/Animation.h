#pragma once
#include <iostream>

#include <SDL.h>

class Animation
{
	class State* m_current;

public:
	Animation();
	void setCurrent(State* s);

	void idle(SDL_Rect &destRect);

	void jumping(SDL_Rect &destRect);

	void climbing(SDL_Rect &destRect);
};