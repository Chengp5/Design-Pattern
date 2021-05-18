#include"Note.h"
#include"JINGLI.h"
#include"rejection.h"
#include"ZHUREN.h"
#include"ZONGJINGLI.h"

/// <summary>
/// an example of Chain of responsibility
/// 假条审批模块：如果员工请假天数小于3天，主任可以审批该假条；
/// 如果员工请假天数大于等于3天，
/// 小于10天，经理可以审批；
/// 如果员工请假天数大于等于10天，
/// 小于30天，总经理可以审批；
/// 如果超过30天，总经理也不能审批，提示相应的拒绝信息
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