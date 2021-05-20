#pragma once
#include<iostream>
class Memento
{
	friend class Scene;
public:
	Memento& operator=(const Memento& m)
	{
		if (&m == this)
			return *this;
		x = m.x;
		y = m.y;
		state = m.state;
		return *this;
	}
	Memento()
	{}
	Memento(const Memento& m)
	{
		x = m.x;
		y = m.y;
		state=m.state;
	}
	void setState(std::string s)
	{
		state = s;
	}
	std::string getState()
	{
		return state;
	}
private:
	int x;
	int y;
	std::string state;
};

