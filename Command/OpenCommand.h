#pragma once
#include "Command.h"
class OpenCommand :
    public Command
{
public:
    OpenCommand(BoardScreen* r) :reciver(r)
    {

    }
    virtual void excute()
    {
        reciver->open();
    }
    void setReciver(BoardScreen* r)
    {
        reciver = r;
    }
private:
    BoardScreen* reciver;
};

