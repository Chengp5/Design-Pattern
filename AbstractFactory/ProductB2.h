#pragma once
#include "ProductB.h"
class ProductB2 :
    public ProductB
{
    virtual void see()
    {
        std::cout << "Pb2" << std::endl;
    }
};

