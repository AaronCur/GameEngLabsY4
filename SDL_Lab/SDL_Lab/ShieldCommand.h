#pragma once
#include "Command.h"
class ShieldCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "Shield" << std::endl;
	};
	virtual void undo()
	{
		std::cout << "Undo Shield" << std::endl;
	};
	virtual void redo()
	{
		std::cout << "Redo Shield" << std::endl;
	};
};