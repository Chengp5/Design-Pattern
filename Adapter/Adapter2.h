#pragma once
#include"Myclass.h"
#include"Target.h"
/// <summary>
/// ��ʵ��Ϊ ��������
/// </summary>
class Adapter2 :
	public Myclass, public  Target
{
	virtual void request() {
		method1();
		method2();
	}
};

