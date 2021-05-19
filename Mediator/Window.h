#ifndef WINDOW_H
#define WINDOW_H
#include<list>
#include"Mediator.h"
#include"GraphicPane.h"
#include"TextPane.h"
#include"ListPane.h"
class Window :public Mediator
{
public:
	virtual void componentChanged(Pane* p);
	GraphicPane* g;
	TextPane* t;
	ListPane* l;
private:
	
};
#endif
