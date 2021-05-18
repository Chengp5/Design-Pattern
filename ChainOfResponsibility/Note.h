#pragma once
#include<iostream>
class Note
{
public:
	Note(int n):day(n)
	{
	
	}
	int getDay()const 
	{
		return day;
	}
	void setDay(int _day)
	{
		day = _day;
	}
private:
	int day;
};

