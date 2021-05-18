#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
public:
    Circle() {
        color = new Red();
    }
    Circle(Color* arg_color)
    {
        color = arg_color;
    }
    ~Circle() {}
    virtual void paint() { std::cout << "circle" << getColor() << std::endl; }
    virtual void setColor(Color * arg_color) {
        color = arg_color;
    }
    virtual std::string getColor() {
        return color->getName();
}
};

