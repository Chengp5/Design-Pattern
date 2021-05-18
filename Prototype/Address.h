#pragma once
#include<iostream>
class Address
{
public:
	Address():name("NULL")
	{}
	Address(const std::string& str):name(str)
	{}
	~Address()
	{}
	void setName(const std::string str) {
		name = str;
	}
	std::string getName() {
		return name;
	}
private:
	std::string name;
};

