#pragma once
#include "Color.h"
class Red :
    public Color
{
public:
    Red() {
        name = "Red";
    }
    ~Red() {}
    virtual void paintColor()
    {
        std::cout << "red" << std::endl;
    }
};

