#pragma once
#include "Container.h"
class Window :
    public Container
{
public:
    virtual void show()
    {
        std::cout << "Window\n";
        Container::show();
    }
};

