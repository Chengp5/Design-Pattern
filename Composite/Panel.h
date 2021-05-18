#pragma once
#include "Container.h"
class Panel :
    public Container
{
public:
    virtual void show()
    {
        std::cout << "Panel\n";
        Container::show();
    }
};

