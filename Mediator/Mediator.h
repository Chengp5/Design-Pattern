#ifndef MEDIATOR_H
#define MEDIATOR_H


//#include"GraphicPane.h"
//#include"ListPane.h"
//#include"TextPane.h"
class Pane;

class Mediator
{
public:
	virtual void componentChanged(Pane* p) = 0;
	
};
#endif // !MEDIATOR_H
