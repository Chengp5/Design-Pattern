#ifndef PANE_H
#define PANE_H
#include<iostream>
#include"Mediator.h"
class Pane
{
public:
	virtual void update() = 0;
	virtual void change() = 0;
	virtual void setMediator(Mediator* _m) = 0;
};
#endif

