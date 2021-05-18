#include"Adapter.h"
#include"Adapter2.h"
#include"Myclass.h"
void main()
{
	Myclass c;
	Target* t = new Adapter(&c);
	t->request();
	delete t;
	t = new Adapter2();
	t->request();
	
}