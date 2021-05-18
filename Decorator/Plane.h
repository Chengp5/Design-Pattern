#pragma once
#include"Changer.h"
class Plane:
	public Changer
{
	virtual void move() {
		root->move();
	  }
	  void fly()
	  {
		  std::cout << "plane flying\n";
	  }
};

