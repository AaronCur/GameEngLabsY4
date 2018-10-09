#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{
	std::cout << "deconstructing" << std::endl;
}

void MacroCommand::add(Command* command)
{
	commands.push_back(command);
}

void MacroCommand::remove(Command* command)
{
	commands.remove(command);
}


void MacroCommand::execute()
{
	std::cout << "\n" << std::endl;
	std::cout << "executing" << std::endl;
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}

	std::cout << "executed" << std::endl;
}


void MacroCommand::undo()
{
	std::cout << "\n" << std::endl;
	if (commands.size() > 0) {

		(*commands.rbegin())->undo();
		redoCommands.push_back(*commands.rbegin());
		commands.pop_back();
	}
	else {
		std::cout << "Command List Empty" << std::endl;
	}
	
	
}
void MacroCommand::redo()
{
	std::cout << "\n" << std::endl;
	if (redoCommands.size() > 0) {

		(*redoCommands.rbegin())->redo();
		commands.push_back(*redoCommands.rbegin());
		redoCommands.pop_back();
	}
	else {
		std::cout << "No more commands to Redo" << std::endl;
	}


}

void MacroCommand::clear()
{
	commands.clear();
	std::cout << "\n" << std::endl;
	std::cout << "Clear all" << std::endl;
}