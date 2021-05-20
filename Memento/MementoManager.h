#pragma once
#include<stack>
#include"Memento.h"
class MementoManager
{
public:
	void setMemento(Memento* p)
	{
		savedList.push(*p);
	}
	Memento getMemeto()
	{
		Memento p;
		p=savedList.top();
	
		savedList.pop();
		return p;
	}
private:
	std::stack<Memento> savedList;
};

