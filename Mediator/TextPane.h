#ifndef TEXTPANE_H
#define TEXTPANE_H
#include"Pane.h"
class TextPane :
    public Pane
{
public:
    TextPane(Mediator* _m) :m(_m)
    {}
    virtual void update() {
        std::cout << "TextPane updating\n";
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
#endif;

