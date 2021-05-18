#pragma once
#include "Component.h"
class TextEdit :
    public Component
{
public:
    void show() {
        std::cout << "TextEdit\n";
    }
};

