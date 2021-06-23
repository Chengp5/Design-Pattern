#pragma once
#include "Singleton.h"
class UIManager :
    public Singleton<UIManager>
{
public:
    void test()
    {
        std::cout << std::format("this is a {} singleton\n", "UIManager");
    }
};

