#include "Animation.h"
#include "Idle.h"
Animation::Animation()
{
	m_current = new Idle();
}

void Animation::idle(SDL_Rect &destRect)
{
	m_current->idle(this, destRect);
}
void Animation::jumping(SDL_Rect &destRect)
{
	m_current->jumping(this, destRect);
}
void Animation::climbing(SDL_Rect &destRect)
{
	m_current->climbing(this, destRect);
}

void Animation::setCurrent(State* s)
{
	m_current = s;
}