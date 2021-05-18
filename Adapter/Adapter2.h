#pragma once
#include"Myclass.h"
#include"Target.h"
/// <summary>
/// 此实现为 类适配器
/// </summary>
class Adapter2 :
	public Myclass, public  Target
{
	virtual void request() {
		method1();
		method2();
	}
};

