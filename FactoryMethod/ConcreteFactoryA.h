#pragma once
#include "Factory.h"
#include"ConcreteProductA.h"
class ConcreteFactoryA :
    public Factory
{
	virtual Product* CreateProduct()
	{
		return new ConcreteProductA();
	}
};

