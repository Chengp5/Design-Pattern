#pragma once
#include"CompleteMode.h"
#include"SimpleMode.h"
#include"MemoryMode.h"
class Director
{
public:
	Director(Mode* _builder):builder(_builder){}
	~Director()
	{
		delete builder;
	}
	void setBuilder(Mode* _builder)
	{
		builder = _builder;
	}
	VideoPlayer* construct()
	{
		builder->buildMenu();
		builder->buildPlayList();
		builder->buildMainWindow();
		builder->buildControlBar();
		builder->buildCollectList();
		return builder->getResult();
	}
private:
	Mode* builder;
};

