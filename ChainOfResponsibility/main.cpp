#include"Note.h"
#include"JINGLI.h"
#include"rejection.h"
#include"ZHUREN.h"
#include"ZONGJINGLI.h"

/// <summary>
/// an example of Chain of responsibility
/// ��������ģ�飺���Ա���������С��3�죬���ο��������ü�����
/// ���Ա������������ڵ���3�죬
/// С��10�죬�������������
/// ���Ա������������ڵ���10�죬
/// С��30�죬�ܾ������������
/// �������30�죬�ܾ���Ҳ������������ʾ��Ӧ�ľܾ���Ϣ
/// </summary>
void main()
{
	Note n(1);
	Note n1(5);
	Note n2(15);
	Note n3(35);
	ChainNode* p1 = new ZHUREN;
	ChainNode* p2 = new JINGLI;
	ChainNode* p3 = new ZONGJINGLI;
	ChainNode* p4 = new rejection;

	p1->setNext(p2);
	p2->setNext(p3);
	p3->setNext(p4);
	p1->shenpi(n);
	p1->shenpi(n1);
	p1->shenpi(n2);
	p1->shenpi(n3);
}