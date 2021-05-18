#pragma once
#include "ProductB.h"
class ProductB1 :
    public ProductB
{
    virtual void see()
    {
        std::cout << "Pb1"<<std::endl;
    }
};

