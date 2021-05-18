#pragma once
#include "Factory.h"

class ConcreteFactory1 :
    public Factory
{
	virtual ProductA * CreateProductA()
	{
		return new ProductA1();
	}
	virtual ProductB * CreateProductB()
	{
		return new ProductB1();
	}
};

