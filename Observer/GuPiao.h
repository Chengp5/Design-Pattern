#pragma once
#include"Subject.h"
class GuPiao:
	public Subject
{
public:
	GuPiao(int p) :price(p)
	{

	}
	virtual void nofity() {
		for (auto o : observers)
		{
			o->update(price);
		}
	}
	void setPrice(int p)
	{
		if (abs(p - price) > price * 0.05)
		{
			price = p;
			nofity();
		}
	}
private:
	int price;
};

