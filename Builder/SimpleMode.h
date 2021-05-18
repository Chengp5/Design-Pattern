#pragma once
#include "Mode.h"
class SimpleMode :
    public Mode
{
public:
	SimpleMode()
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

	}
	virtual VideoPlayer* getResult() {
		return p;
	}
private:
	VideoPlayer* p;
};

