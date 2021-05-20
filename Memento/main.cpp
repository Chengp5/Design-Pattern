#include"MementoManager.h"
#include"Scene.h"
/// <summary>
/// an example of Memento pattern
/// 在游戏过程中可以设置一个恢复点，用于保存当前的游戏场景，
/// 如果在后续游戏过程中玩家角色“不幸牺牲”，
/// 可以返回到先前保存的场景，从所设恢复点开始重新游戏。
/// 试使用备忘录模式设计该功能
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