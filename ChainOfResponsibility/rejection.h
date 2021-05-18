#pragma once
#include "ChainNode.h"
class rejection :
    public ChainNode
{
public:
	virtual void shenpi(const Note& p)
	{
		if (p.getDay()>=30)
		{
			std::cout << "application rejected \n";
		}
		else
		{
			if (ChainNode::getNext())
				ChainNode::getNext()->shenpi(p);
		}
	}
};

