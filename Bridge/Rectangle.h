#pragma once
#include"Shape.h"
class Rectangle:
    public Shape
{
public:
    Rectangle() {
        color = new Red();
    }
    Rectangle(Color *arg_color)
    {
        color = arg_color;
    }
    ~Rectangle() { }
    virtual void paint() { std::cout << "rectangle" <<getColor()<< std::endl; }
    virtual void setColor(Color* arg_color) {
        color = arg_color;
    }
    virtual std::string getColor() {
        return color->getName();
    }
};