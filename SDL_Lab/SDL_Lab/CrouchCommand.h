#pragma once
#include "Command.h"
class CrouchCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "Crouch" << std::endl;
	}
	/*virtual void Delete()
	{
		std::cout << "Crouch Removed" << std::endl;
	}*/
};
