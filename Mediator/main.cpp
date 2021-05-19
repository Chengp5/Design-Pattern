/// <summary>
/// an example of Mediator pattern
/// ��һ��ͼ�ν�����⡣�������Ҫ��������Ԥ����Ĵ���(Pane)����
/// ����TextPane��ListPane��GraphicPane�ȣ�
/// ����֮�䲻����ֱ�����á�
/// ���ڸ�����Ӧ����һ������һ�鴰��Ĵ���(Window)��ɣ�
/// ������ҪЭ������֮�����Ϊ
/// </summary>
#include"Window.h"
#include"GraphicPane.h"
#include"TextPane.h"
#include"ListPane.h"
void main()
{
	Window w;
	GraphicPane G(&w);
	ListPane L(&w);
	TextPane T(&w);
	w.g = &G;
	w.t = &T;
	w.l = &L;
	G.change();
	L.change();
	T.change();
}