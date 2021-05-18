#include"Director.h"
/// <summary>
/// an example of Builder pattern
/// 
/// һ����Ƶ���������Ϊ�˸��û�ʹ���ṩ���㣬�ò�������ṩ���ֽ�����ʾģʽ��
/// ������ģʽ������ģʽ������ģʽ������ģʽ�ȡ�
/// �ڲ�ͬ����ʾģʽ������������Ԫ���������죬
/// ��������ģʽ�½���ʾ�˵��������б������ڡ��������ȣ�
/// �ھ���ģʽ��ֻ��ʾ�����ںͿ�������
/// ���ڼ���ģʽ�½���ʾ�����ڡ����������ղ��б��
/// </summary>
void main()
{
	Director* p = new Director(new CompleteMode());
	p->construct()->display();
	p = new Director(new SimpleMode());
	p->construct()->display();
	p = new Director(new MemoryMode());
	p->construct()->display();
}