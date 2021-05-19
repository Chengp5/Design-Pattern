#include "Window.h"

void Window::componentChanged(Pane* p)
{
	if ((GraphicPane*)p == g)
	{
		//....
		g->update();
		t->update();
		std::cout << "\n";
	}
	else if ((TextPane*)p == t)
	{
		//....
		t->update();
		l->update();
		std::cout << "\n";
	}
	else if ((ListPane*)p == l)
	{
		//...
		l->update();
		g->update();
		std::cout << "\n";
	}
	else {

	}
}