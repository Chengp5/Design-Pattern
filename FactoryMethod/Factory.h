#pragma once
#include"ConcreteProductA.h"
#include"ConcreteProductB.h"
#include<iostream>

/// <summary>
/// �������𴴽�����Ĳ�Ʒ
/// ���������д�����Ʒ���߼�
/// ����:
/// ����������״�İ�ť
/// 
/// �����������ͻ���ͨ�ŵ�ͨ��Э�������Ϣ��
/// </summary>
class Factory
{
public:
	virtual Product* CreateProduct()
	{
	
	}
};

