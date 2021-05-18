#pragma once
#include "ChainNode.h"
class JINGLI :
    public ChainNode
{
public:
	virtual void shenpi(const Note& p)
	{
		if (p.getDay()>=3&&p.getDay()<10)
		{
			std::cout << "JINGLI approved\n";
		}
		else
		{
			if (ChainNode::getNext())
				ChainNode::getNext()->shenpi(p);
		}
	}
};

