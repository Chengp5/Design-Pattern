#pragma once
#include"ProductB2.h"
#include"ProductB1.h"
#include"ProductA2.h"
#include"ProductA1.h"
#include<iostream>

/// <summary>
/// �������𴴽�����Ĳ�Ʒ
/// ���������д�����Ʒ���߼�
/// 
/// 
/// ���ӣ�
/// �й���1��Ʒ��1���� ����2��Ʒ��2��
/// 
/// ������������������ ���ӣ�����
/// 
/// </summary>
class Factory
{
public:
	virtual ProductA* CreateProductA() = 0;
	
	
	virtual ProductB* CreateProductB() = 0;
	


};

