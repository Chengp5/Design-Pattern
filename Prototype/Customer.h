#pragma once
#include"Address.h"

class Customer
{
public:
	Customer()
	{
		address = new Address();
	}
	Customer(const std::string& str)
	{
		address = new Address(str);
	}
	~Customer()
	{
		delete address;
	}
	virtual Customer* clone() {
		Customer* p=new Customer();
		p->address = this->address;
		

		/*Customer* p = new Customer();
		p->address->setName(this->address->getName());*/
		return p;
	}
	virtual Customer* deepClone()
	{
		Customer* p = new Customer();
		p->address->setName(this->address->getName());
		return p;
	}
	void display()
	{
		std::cout << address->getName() << "\n";
	}
	Address* address;
private:
	

};

