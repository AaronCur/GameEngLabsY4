#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonX_ = new JumpCommand();
	buttonY_ = new FireCommand();
	buttonA_ = new CrouchCommand();
	buttonB_ = new MeleeCommand();
	buttonD_ = new ShieldCommand();
	macro = new MacroCommand();

	m_currentAction = IDLE;

}

InputHandler::~InputHandler()
{

}
Action InputHandler::getCurrentAction()
{
	return m_currentAction;
}
void InputHandler::setCurrentAction(Action a)
{
	m_currentAction = a;
}



void InputHandler::handleInput(SDL_Event & event, SDL_Rect &destRect)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_x:
			buttonX_->execute();
			macro->add(buttonX_);
			break;
		case SDLK_y:
			buttonY_->execute();
			macro->add(buttonY_);
			break;
		case SDLK_a:
			buttonA_->execute();
			macro->add(buttonA_);
			break;
		case SDLK_b:
			buttonB_->execute();
			macro->add(buttonB_);
			break;
		case SDLK_d:
			buttonD_->execute();
			macro->add(buttonD_);
			break;
		case SDLK_s:
			macro->execute();
			break;


		case SDLK_1:
			
			fsm.jumping(destRect);
			
			break;
		case SDLK_2:
			fsm.climbing(destRect);

			break;
		case SDLK_3:
			fsm.idle(destRect);
			break;


		}

	}

}