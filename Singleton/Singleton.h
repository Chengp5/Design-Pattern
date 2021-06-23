#pragma once

#include<iostream>
#include<format>

template<class T>
class Singleton
{
public:
	static T* getInstance()
	{
		if (instance != nullptr)
			instance = new T();
		return instance;
	}
protected:
	Singleton() {}

	static T* instance;
	

};
template<class T>
T* Singleton<T>::instance=nullptr;
