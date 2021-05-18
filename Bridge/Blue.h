#pragma once
#include "Color.h"
class Blue :
    public Color
{
public:
    Blue() {
        name = "Blue";
    }
    ~Blue(){}
    virtual void paintColor()
    {
        std::cout << "blue" << std::endl;
    }
    
};

