#include"GuPiao.h"
#include"GuMing.h"
/// <summary>
/// 一款实时在线股票软件，该软件需提供如下功能：
/// 当股票购买者所购买的某支股票价格变化幅度达到5%时，
/// 系统将自动发送通知（包括新价格）给购买该股票的所有股民。
/// 试使用观察者模式设计并实现该系统
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