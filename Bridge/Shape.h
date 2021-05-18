#pragma once
#include"Red.h"
#include"Blue.h"
#include"Green.h"
class Shape
{
public:
	virtual void paint() = 0;
	virtual void setColor(Color* arg_color) = 0;
	virtual std::string getColor() = 0;
protected: 
	Color* color;
};

