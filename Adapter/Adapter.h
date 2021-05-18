#pragma once
#include"Myclass.h"
#include"Target.h"
/// <summary>
/// ��һ���ӿ�ת���ɿͻ�ϣ������һ���ӿڣ�
/// ������ģʽʹ�ӿڲ����ݵ���Щ�����һ������
/// �����Ϊ��װ��(Wrapper)��
/// ������ģʽ�ȿ�����Ϊ��ṹ��ģʽ��
/// Ҳ������Ϊ����ṹ��ģʽ��
/// 
/// ��ʵ��Ϊ ����������
/// </summary>
class Adapter:
	public  Target
{
public:
	Adapter(Myclass * instance) { adaptee = instance; }
	~Adapter() { delete adaptee; }
	virtual void request()
	{
		adaptee->method1();
		adaptee->method2();
	}
private:
	Myclass* adaptee;
};

