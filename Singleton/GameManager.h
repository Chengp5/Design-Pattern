#pragma once
#include "Singleton.h"

class GameManager :
    public Singleton<GameManager>
{
public:
    void test()
    {
        std::cout << std::format("this is a {} singleton\n", "GameManager");
    }
};

