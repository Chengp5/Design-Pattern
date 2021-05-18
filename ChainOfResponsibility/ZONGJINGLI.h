#pragma once
#include "ChainNode.h"
class ZONGJINGLI :
    public ChainNode
{
public:
	virtual void shenpi(const Note& p)
	{
		if (p.getDay()>=10&&p.getDay()<30)
		{
			std::cout << "ZHONGJINGLI approved\n";
		}
		else
		{
			if (ChainNode::getNext())
				ChainNode::getNext()->shenpi(p);
		}
	}
};

