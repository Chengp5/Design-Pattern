#include"Rectangle.h"
#include"Triangle.h"
#include"Circle.h"
/// <summary>
/// a example of Bridge pattern
/// 
/// shape with different colors
/// </summary>
void main() {
	Color *r=new Red();
	Color *b=new Blue();
	Color *g=new Green();
	Shape* s1 = new Rectangle(r);
	Shape* s2 = new Rectangle(g);
	Shape* s3 = new Rectangle(b);
	s1->paint();
	s2->paint();
	s3->paint();
	s1 = new Triangle(r);
	s2 = new Triangle(g);
	s3 = new Triangle(b);
	s1->paint();
	s2->paint();
	s3->paint();
	s1 = new Circle(r);
	s2 = new Circle(g);
	s3 = new Circle(b);
	s1->paint();
	s2->paint();
	s3->paint();
}