#pragma once
#include "Plane.h"

class Helicopter :
    public Plane
{
public:
	Helicopter(FeiXingTeZheng* f, QiFeiTeZheng* q) :a(f), b(q)
	{
		name = "Ö±Éý»ú";
	}
	virtual void fly()
	{
		std::cout << name<<"\n";
		b->qiFei();
		a->feiXing();
	}
private:
	FeiXingTeZheng* a;
	QiFeiTeZheng* b;
	std::string name;
};

