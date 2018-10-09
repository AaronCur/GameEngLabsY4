#pragma once
#include "Command.h"
#include <list>
class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* command);
	virtual void remove(Command* command);
	virtual void execute();
	virtual void undo();
	virtual void redo();
	virtual void clear();

private:
	std::list<Command*> commands;
	std::list<Command*> redoCommands;
};

