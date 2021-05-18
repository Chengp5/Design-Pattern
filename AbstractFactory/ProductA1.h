#pragma once
#include "ProductA.h"
class ProductA1 :
    public ProductA
{
    virtual void use() {
        std::cout << "Pa1"<<std::endl;
    }
};

