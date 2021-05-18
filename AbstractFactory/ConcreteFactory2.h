#pragma once
#include "Factory.h"

class ConcreteFactory2 :
    public Factory
{
	virtual ProductA * CreateProductA()
	{
		return new ProductA2();
	}
	virtual ProductB * CreateProductB()
	{
		return new ProductB2();
	}
};

