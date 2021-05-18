#pragma once
#include "ProductA.h"
class ProductA2 :
    public ProductA
{
    virtual void use() {
        std::cout << "Pa2" << std::endl;
    }
};

