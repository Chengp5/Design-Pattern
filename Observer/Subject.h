#pragma once
#include"Observer.h"
#include<list>
class Subject
{
public:
	void add(Observer* o)
	{
		observers.push_back(o);
	}
	void remove(Observer* o)
	{
		observers.remove(o);
	}
	virtual void nofity() {

	}
protected:
	std::list<Observer*> observers;
};

