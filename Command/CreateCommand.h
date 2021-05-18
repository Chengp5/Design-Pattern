#pragma once
#include "Command.h"
class CreateCommand :
    public Command
{
public:
    CreateCommand(BoardScreen* r):reciver(r)
    {

    }
    virtual void excute()
    {
        reciver->create();
    }
    void setReciver(BoardScreen* r)
    {
        reciver = r;
    }
private:
    BoardScreen* reciver;
};

