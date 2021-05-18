#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
public:
    Triangle() {
        color = new Red();
    }
    Triangle(Color* arg_color)
    {
        color = arg_color;
    }
    ~Triangle() {}
    virtual void paint() { std::cout << "triangle" << getColor() << std::endl; }
    virtual void setColor(Color* arg_color) {
        color = arg_color;
    }
    virtual std::string getColor() {
        return color->getName();
    }
};

