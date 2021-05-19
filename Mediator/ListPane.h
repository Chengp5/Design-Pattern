#ifndef LISTPANE_H
#define LISTPANE_H
#include"Pane.h"


class ListPane :public Pane
{
public:
    ListPane(Mediator* _m) :m(_m)
    {}
    virtual void update() {
        std::cout << "ListPane updating\n";
    }
    virtual void change() {
        m->componentChanged(this);
    }
    virtual void setMediator(Mediator* _m)
    {
        m = _m;
    }
private:
    Mediator* m;
};
#endif // !LISTPANE_H

