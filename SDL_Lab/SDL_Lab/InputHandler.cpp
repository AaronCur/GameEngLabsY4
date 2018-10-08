#include "InputHandler.h"

InputHandler::InputHandler()
{
	button1_ = new JumpCommand();
	button2_ = new FireCommand();
	button3_ = new CrouchCommand();
	button4_ = new MeleeCommand();
	button5_ = new ShieldCommand();
	macro = new MacroCommand();

}

InputHandler::~InputHandler()
{

}

void InputHandler::handleInput(SDL_Event & event)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_1:
			button1_->execute();
			macro->add(button1_);
			break;
		case SDLK_2:
			button2_->execute();
			macro->add(button2_);
			break;
		case SDLK_3:
			button3_->execute();
			macro->add(button3_);
			break;
		case SDLK_4:
			button4_->execute();
			macro->add(button4_);
			break;
		case SDLK_5:
			button5_->execute();
			macro->add(button5_);
			break;
		case SDLK_m:
			macro->execute();
			break;
		case SDLK_6:
		//	button1_->Delete();
			macro->remove(button1_);
			break;
		case SDLK_7:
			//button2_->Delete();
			macro->remove(button2_);
			break;
		case SDLK_8:
		//	button3_->Delete();
			macro->remove(button3_);
			break;
		case SDLK_9:
		//	button4_->Delete();
			macro->remove(button4_);
			break;
		case SDLK_0:
		//	button5_->Delete();
			macro->remove(button5_);
			break;
		case SDLK_e:
			//	button5_->Delete();
			macro->undo();
			break;





		}

	}

}