#pragma once
#include"ChainNode.h"
class ZHUREN:
	public ChainNode
{
public:
	virtual void shenpi(const Note& p)
	{
		if (p.getDay() < 3)
		{
			std::cout << "ZHUREN approved\n";
		}
		else
		{
			if (ChainNode::getNext())
				ChainNode::getNext()->shenpi(p);
		}
	}
};

