#pragma once

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;

protected:
	Command() {}
};

class JumpCommand : public Command
{
public:
	virtual void execute()
	{
		jump();
	}
};

class CrouchCommand : public Command
{
public:
	virtual void execute()
	{
		crouch();
	}
};

class ShieldCommand : public Command
{
public:
	virtual void execute()
	{
		shield();
	}
};

class MeleeCommand : public Command
{
public:
	virtual void execute()
	{
		melee();
	}
};