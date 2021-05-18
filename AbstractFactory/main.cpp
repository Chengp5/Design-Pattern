#include"ConcreteFactory1.h"
#include"ConcreteFactory2.h"
void main()
{
	Factory* f1 =new  ConcreteFactory1();
	ProductA* p1 = f1->CreateProductA();
	ProductB* p2 = f1->CreateProductB();
	p1->use();
	p2->see();
	Factory* f2 = new  ConcreteFactory2();
	p1 = f2->CreateProductA();
	p2 = f2->CreateProductB();
	p1->use();
	p2->see();
}