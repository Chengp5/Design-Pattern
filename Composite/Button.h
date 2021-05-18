#pragma once
#include "Component.h"
class Button :
    public Component
{
public:
    void show() {
        std::cout << "Button\n";
    }
};

