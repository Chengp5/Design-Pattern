#pragma once
#include "Plane.h"
class Harrier :
    public Plane
{
public:
	Harrier(FeiXingTeZheng* f, QiFeiTeZheng* q) :a(f), b(q)
	{
		name = "��ʽս����";
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

