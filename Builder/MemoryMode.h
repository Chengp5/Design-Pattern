#pragma once
#include "Mode.h"
class MemoryMode :
    public Mode
{
public:
	MemoryMode()
	{
		p = new VideoPlayer();
	}
	virtual void buildMenu()
	{
		
	}
	virtual void buildPlayList() {
		
	}
	virtual void buildMainWindow() {
		p->setMainWinodw("true");
	}

	virtual void buildControlBar()
	{
		p->setControlBar("true");
	}
	virtual void buildCollectList()
	{
		p->setCollectList("true");
	}
	virtual VideoPlayer* getResult() {
		return p;
	}
private:
	VideoPlayer* p;
};

