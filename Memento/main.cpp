#include"MementoManager.h"
#include"Scene.h"
/// <summary>
/// an example of Memento pattern
/// ����Ϸ�����п�������һ���ָ��㣬���ڱ��浱ǰ����Ϸ������
/// ����ں�����Ϸ��������ҽ�ɫ��������������
/// ���Է��ص���ǰ����ĳ�����������ָ��㿪ʼ������Ϸ��
/// ��ʹ�ñ���¼ģʽ��Ƹù���
/// </summary>
void main()
{
	MementoManager mgr;
	Scene A(1, 1, "born");
	mgr.setMemento(A.save());
	A.display();
	A.change(2, 2, "grown");
	mgr.setMemento(A.save());
	A.display();
	A.change(3, 3, "dead");
	A.display();
	A.reload(mgr.getMemeto());
	A.display();


}