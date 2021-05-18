#pragma once
#include"Command.h"
class MenuItem
{
public:
	MenuItem(Command* p):comd(p)
	{

	}
	void click()
	{
		comd->excute();
	}
	void setCommand(Command* p)
	{
		comd = p;
	}
private:
	Command* comd;
};

