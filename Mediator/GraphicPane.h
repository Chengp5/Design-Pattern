#ifndef GRAPHICPANE_H
#define GRAPHICPANE_H
#include"Pane.h"
class GraphicPane :
    public Pane
{
public:
    GraphicPane(Mediator* _m):m(_m)
    {}
    virtual void update() {
        std::cout << "GraphicPane updating\n";
    }
    virtual void change() {
        m->componentChanged(this);
    }
    virtual void setMediator(Mediator* _m)
    {
        m = _m;
    }
private:
    Mediator * m;
};
#endif
