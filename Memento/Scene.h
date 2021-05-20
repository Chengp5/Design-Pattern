#pragma once
#include<iostream>
#include"Memento.h"
class Scene
{
public:
	Scene(const int& _x, const int& _y, const std::string& s): x(_x),y(_y),state(s)
	{

	}
	void reload(const Memento& m)
	{
		std::cout << "reloading scene\n";
		x = m.x;
		y = m.y;
		state = m.state;
	}
	Memento* save() {
		std::cout << "saving scene\n";
		Memento* m=new Memento;
		m->state = state;
		m->x = x;
		m->y = y;
		return m;
	}
	void display()
	{
		std::cout << x << "," << y << ":" << state << "\n";
	}
	void change(const int& _x, const int& _y, std::string const& s)
	{
		x = _x;
		y = _y;
		state = s;
	}
private:
	int x;
	int y;
	std::string state;
};

