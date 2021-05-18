#pragma once
#include"VideoPlayer.h"
class Mode
{
public:
	virtual void buildMenu() = 0;
	virtual void buildPlayList() = 0;
	virtual void buildMainWindow() = 0;
	virtual void buildControlBar() = 0;
	virtual void buildCollectList() = 0;
	virtual VideoPlayer* getResult() = 0;
};

