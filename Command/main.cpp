
#include"Menu.h"
#include"OpenCommand.h"
#include"EditCommand.h"
#include"CreateCommand.h"
/// <summary>
/// an example of Command pattern
/// һ������Windowsƽ̨�Ĺ����ϵͳ����ϵͳ�ṩ��һ�����˵�(Menu)��
/// �����˵��а�����һЩ�˵���(MenuItem)������ͨ��Menu���addMenuItem()�������Ӳ˵��
/// �˵������Ҫ������click()��ÿһ���˵������һ�����������࣬
/// �������������OpenCommand(������)��CreateCommand(�½�����)��EditCommand(�༭����)�ȣ�
/// ���������һ��execute()������
/// ���ڵ��ù����ϵͳ������(BoardScreen)��open()��create()��edit()�ȷ�����
/// ��ʹ������ģʽ��Ƹ�ϵͳ��
/// �Ա㽵��MenuItem����BoardScreen��֮�����϶�
/// </summary>
void main()
{
	BoardScreen b;
	Command* c1 = new CreateCommand(&b);
	Command* c2= new OpenCommand(&b);
	Command* c3 = new EditCommand(&b);
	MenuItem i1(c1);
	MenuItem i2(c2);
	MenuItem i3(c3);
	Menu m;
	m.addMenuItem(i1);
	m.addMenuItem(i2);
	m.addMenuItem(i3);
	m.clickItem(1);
	m.clickItem(2);
	m.clickItem(0);


}