#pragma once
#include"ConcreteProductA.h"
#include"ConcreteProductB.h"
#include<iostream>

/// <summary>
/// 工厂负责创建具体的产品
/// 工厂必须有创建产品的逻辑
/// 例子:
/// 创建各种形状的按钮
/// 
/// 创建服务器客户端通信的通信协议或者消息包
/// </summary>
class Factory
{
public:
	virtual Product* CreateProduct()
	{
	
	}
};

