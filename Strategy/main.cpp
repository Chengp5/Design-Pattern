#include"AirPlane.h"
#include"Fighter.h"
#include"Harrier.h"
#include"Helicopter.h"
#include"LongDistanceTakeOff.h"
#include"SuperSonicFly.h"
#include"SubSonicFly.h"
#include"VerticalTakeOff.h"
void main()
{
	QiFeiTeZheng* p1 = new VerticalTakeOff();
	QiFeiTeZheng* p2 = new LongDistanceTakeOff();
	FeiXingTeZheng* q1 = new SubSonicFly();
	FeiXingTeZheng* q2 = new SuperSonicFly();
	Plane* a =new Helicopter(q1, p1);
	Plane* b = new AirPlane(q1, p2);
	Plane* c = new Fighter(q2, p2);
	Plane* d = new Harrier(q2, p1);
	a->fly();
	b->fly();
	c->fly();
	d->fly();

}