#pragma once
#include "Command.h"
class ShieldCommand : public Command
{
public:
	virtual void execute()
	{
		shield();
	}
};