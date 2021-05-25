#pragma once
#include"Observer.h"
class GuMing:
	public Observer
{
public:
	GuMing(std::string n) :name(n)
	{

	}
	void update(int p)
	{
		std::cout << "i am" <<name<< 
			"price of stock is changing, new price is "<<p<<"\n";
	}
private:
	std::string name;
};

