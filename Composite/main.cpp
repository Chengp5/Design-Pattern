#include"Button.h"
#include"Window.h"
#include"TextEdit.h"
#include"Panel.h"

/// <summary>
/// an example of Composite pattern
/// һ������ؼ��⣬����ؼ���Ϊ�����࣬
/// һ���ǵ�Ԫ�ؼ������簴ť���ı���ȣ�
/// һ���������ؼ������細�塢�м����ȣ�
/// �������ģʽ��Ƹý���ؼ���
/// </summary>

void main()
{
	Window w1;
	Panel p1;
	Button b1;
	TextEdit t1;
	Panel p2;
	Button b2;
	TextEdit t2;
	w1.add(p1);
	w1.add(b1);
	w1.add(t1);
	p1.add(p2);
	p1.add(b2);
	p1.add(t2);
	w1.show();
}