#pragma once
#include "Command.h"
class MeleeCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "Melee" << std::endl;
	}
	/*virtual void Delete()
	{
		std::cout << "Melee removed" << std::endl;
	}*/
};