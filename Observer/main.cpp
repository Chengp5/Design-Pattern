#include"GuPiao.h"
#include"GuMing.h"
/// <summary>
/// һ��ʵʱ���߹�Ʊ�������������ṩ���¹��ܣ�
/// ����Ʊ�������������ĳ֧��Ʊ�۸�仯���ȴﵽ5%ʱ��
/// ϵͳ���Զ�����֪ͨ�������¼۸񣩸�����ù�Ʊ�����й���
/// ��ʹ�ù۲���ģʽ��Ʋ�ʵ�ָ�ϵͳ
/// </summary>
void main()
{
	GuPiao g1(10);
	Observer* o1 = new GuMing("zhangsan");
	Observer* o2 = new GuMing("lisi");
	Observer* o3 = new GuMing("wangwu");
	g1.add(o1);
	g1.add(o2);
	g1.add(o3);
	g1.setPrice(20);
	g1.remove(o1);
	g1.setPrice(30);


}