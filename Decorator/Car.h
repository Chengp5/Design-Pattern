#pragma once
#include "Transformer.h"

class Car :
    public Transformer
{
public:
    virtual void move() {
        std::cout << "car moving\n";
    };
};

