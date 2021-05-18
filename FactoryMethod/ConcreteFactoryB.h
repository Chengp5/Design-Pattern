#pragma once
#include "Factory.h"
#include"ConcreteProductB.h"
class ConcreteFactoryB :
    public Factory
{
	virtual Product* CreateProduct()
	{
		return new ConcreteProductB();
	}
};

