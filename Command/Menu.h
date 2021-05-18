#pragma once
#include"MenuItem.h"
#include<vector>
class Menu
{
public:
	void addMenuItem(const MenuItem& item)
	{
		menulist.push_back(item);
	}
	void clickItem(const int& index)
	{
		menulist[index].click();
	}
private:
	std::vector<MenuItem> menulist;
};

