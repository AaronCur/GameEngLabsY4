#pragma once
#include "Command.h"
class InputHandler
{
public:
	void handleInput();

	//Methods to bind commands...

private:
	Command * buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};