#pragma once
#include "Component.h"
#include<list>
class Container :
    public Component
{
public:
    virtual void add(Component& comp)
    {
        comp_list.emplace_back(&comp);
    }
    virtual bool remove()
    {
        if (comp_list.empty())return false;
        Component* ready2delete = comp_list.back();
        delete ready2delete;
        comp_list.pop_back();
        return true;
    }
    virtual void show()
    {
        for (Component* & c : comp_list)
        {
            c->show();
        }
    }
private:
    std::list<Component*> comp_list;
};

