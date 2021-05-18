#pragma once
#include "Transformer.h"
class Changer :
    public Transformer
{
public:
    Changer(Transformer* arg) :root(arg) {};
    virtual ~Changer() {};
    virtual void move()=0;
protected:
    Transformer* root;
};

