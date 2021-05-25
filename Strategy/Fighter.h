#pragma once
#include "Plane.h"
class Fighter :
    public Plane
{
public:
	Fighter(FeiXingTeZheng* f, QiFeiTeZheng* q) :a(f), b(q)
	{
		name = "Õ½¶·»ú";
	}
	virtual void fly()
	{
		std::cout << name << "\n";
		b->qiFei();
		a->feiXing();
	}
private:
	FeiXingTeZheng* a;
	QiFeiTeZheng* b;
	std::string name;
};

