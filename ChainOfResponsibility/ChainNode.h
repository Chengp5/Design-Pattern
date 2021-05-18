#pragma once
#include"Note.h"
class ChainNode
{
public:
	virtual void shenpi(const Note& n)
	{

	}
	void setNext(ChainNode* p)
	{
		next = p;
	}
	ChainNode* getNext()
	{
		return next;
	}
private:
	ChainNode* next;
};

