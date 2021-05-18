#pragma once
#include "Color.h"
class Green :
    public Color
{
public:
    Green() {
        name = "Green";
    }
    ~Green() {}
    virtual void paintColor()
    {
        std::cout << "green" << std::endl;
    }
};

