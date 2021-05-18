#pragma once
#include "Mode.h"
class CompleteMode :
    public Mode
{
public:
	CompleteMode()
	{
		p = new VideoPlayer();
	}
	
	virtual void buildMenu()
	{
		p->setMenu("true");
	}
	virtual void buildPlayList() {
		p->setPlayList("true");
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

