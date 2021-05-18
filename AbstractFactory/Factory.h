#pragma once
#include"ProductB2.h"
#include"ProductB1.h"
#include"ProductA2.h"
#include"ProductA1.h"
#include<iostream>

/// <summary>
/// 工厂负责创建具体的产品
/// 工厂必须有创建产品的逻辑
/// 
/// 
/// 例子：
/// 有工厂1（品牌1）， 工厂2（品牌2）
/// 
/// 两个工厂都可以生产 电视，冰箱
/// 
/// </summary>
class Factory
{
public:
	virtual ProductA* CreateProductA() = 0;
	
	
	virtual ProductB* CreateProductB() = 0;
	


};

