#pragma once
#include "Command.h"
class JumpCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "Jump" << std::endl;
	}
	/*virtual void Delete()
	{
		std::cout << "Jump Removed" << std::endl;
	}*/
};