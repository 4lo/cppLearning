#include <iostream>
#include <fstream>


#include "GraphicsControl.h"
#include "handletrans.h"
#include "menu.h"

#include "Coordinate.h"
#include "Bar.h"
#include "Circle.h"
#include "delta.h"
#include "Color.h"


mouse_msg msg;
using namespace std;
int main()
{
	system("md DELTA");
	system("md CIRCLE");
	system("md BAR");
	system("md POLY");
	Graphics *newgraph = new Graphics();//Create a new canvas
	//int x = 0, y = 0;
	for (; is_run(); delay_fps(10))//循环体来保证程序持续运行
	{
		flushkey();
		setbkcolor(EGERGB(255, 255, 255));
		recreateBorder();//全屏视窗，然后划线
		setcolor(EGERGB(169, 167, 167));
		line(5, 0, 5, 645);
		line(5, 645, 1195, 645);
		line(1195, 0, 1195, 645);
		line(905, 0, 905, 645);
		setcolor(BLACK);
		transToRightPort();
		xyprintf(0, 0, "欢迎来到画板程序                            ");//欢迎界面
		xyprintf(0, 15, "是否读取  (按shift切换输入法至英文)");
		xyprintf(0, 50, "1.读取我的历史文件");
		xyprintf(0, 70, "0.新建画板");
		while (mousemsg())//如果鼠标有动作
		{
			msg = getmouse();
		}
		if ((msg.y > 40 && msg.y < 70 && msg.is_left() && msg.x>910) || keystate(49))//读取
		{
			transToRightPort();
			flushkey();
			clearviewport();
//			readfile();
			menuForReadBranch();
			
		}
		if ((msg.y > 70 && msg.y < 90 && msg.is_left() && msg.x>910) || keystate(50))//新建
		{
			transToRightPort();
			flushkey();
			clearviewport();
			menuForNewBranch();
		}
	}
	delete newgraph;
	return 0;
}