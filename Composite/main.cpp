#include"Button.h"
#include"Window.h"
#include"TextEdit.h"
#include"Panel.h"

/// <summary>
/// an example of Composite pattern
/// 一个界面控件库，界面控件分为两大类，
/// 一类是单元控件，例如按钮、文本框等，
/// 一类是容器控件，例如窗体、中间面板等，
/// 试用组合模式设计该界面控件库
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