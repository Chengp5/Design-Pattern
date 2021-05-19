/// <summary>
/// an example of Mediator pattern
/// 发一套图形界面类库。该类库需要包含若干预定义的窗格(Pane)对象，
/// 例如TextPane、ListPane、GraphicPane等，
/// 窗格之间不允许直接引用。
/// 基于该类库的应用由一个包含一组窗格的窗口(Window)组成，
/// 窗口需要协调窗格之间的行为
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