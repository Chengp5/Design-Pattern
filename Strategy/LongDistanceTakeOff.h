#pragma once
#include "QiFeiTeZheng.h"
class LongDistanceTakeOff :
    public QiFeiTeZheng
{
public:
    virtual void qiFei()
    {
        std::cout << "���������\n";
    }
};

