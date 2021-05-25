#pragma once
#include "Plane.h"
class AirPlane :
    public Plane
{
public:
	AirPlane(FeiXingTeZheng* f, QiFeiTeZheng* q) :a(f), b(q)
	{
		name = "¿Í»ú";
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

