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
	commands.pop_back();
	std::cout << "\n" << std::endl;
	std::cout << "Undo" << std::endl;
}

void MacroCommand::clear()
{
	commands.clear();
	std::cout << "\n" << std::endl;
	std::cout << "Clear all" << std::endl;
}