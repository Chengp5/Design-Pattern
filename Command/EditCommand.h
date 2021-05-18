#pragma once
#include "Command.h"
class EditCommand :
    public Command
{
public:
    EditCommand(BoardScreen* r) :reciver(r)
    {

    }
    virtual void excute()
    {
        reciver->edit();
    }
    void setReciver(BoardScreen* r)
    {
        reciver = r;
    }
private:
    BoardScreen* reciver;
};

