#pragma once
#include<iostream>
class Color
{
public:
	Color() {
		
	}
	~Color(){}
	virtual void paintColor() = 0;
	virtual std::string getName() {
		return name;
	}
protected:
	std::string name;
};

