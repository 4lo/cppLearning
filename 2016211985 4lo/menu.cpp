#include "menu.h"


extern mouse_msg msg;
void menuForReadBranch()
{
	int x = 0, y = 0;
	for (; is_run(); delay_fps(10))
	{
		flushkey();
		recreateBorder();
		setcolor(EGERGB(169, 167, 167));
		line(5, 0, 5, 645);
		line(5, 645, 1195, 645);
		line(1195, 0, 1195, 645);
		line(905, 0, 905, 645);
		setcolor(BLACK);
		transToRightPort();
		xyprintf(0, 0, "欢迎使用画板程序              ");
		xyprintf(0, 260, "1.重画");
		xyprintf(0, 280, "2.画一个三角形");
		xyprintf(0, 300, "3.画一个圆");
		xyprintf(0, 320, "4.画一条线");
		xyprintf(0, 340, "5.画一个矩形");
		xyprintf(0, 360, "6.用鼠标画线或多边形");
		xyprintf(0, 380, "7.鼠绘");
		xyprintf(0, 400, "8.橡皮");
		xyprintf(0, 420, "9.后退");
		while (mousemsg())
		{
			msg = getmouse();
		}
		x = msg.x;
		y = msg.y;

		if ((y > 260 && y < 280 && msg.is_left() && x>910) || keystate(49))//清左侧屏幕分支
		{
			transToLeftPort();
			clearviewport();
			transToRightPort();
		}
		if ((y > 280 && y < 300 && msg.is_left() && x>910) || keystate(50))//画多边形分支
		{
			transToLeftPort();
			Delta *delta = new Delta();
			transToRightPort();
		}
		if ((y > 300 && y < 320 && msg.is_left() && x>910) || keystate(51))//画圆分支
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 320 && y < 340 && msg.is_left() && x>910) || keystate(52))//画直线分支
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 340 && y < 360 && msg.is_left() && x>910) || keystate(53))//画矩形分支
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 360 && y < 380 && msg.is_left() && x>910) || keystate(54))//鼠标画多边形和直线
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 380 && y < 400 && msg.is_left() && x>910) || keystate(55))//鼠标画任意线
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 400 && y < 420 && msg.is_left() && x>910) || keystate(56))//橡皮
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 420 && y < 440 && msg.is_left() && x>910) || keystate(57))
		{
			transToRightPort();
			clearviewport();
			break;
		}
	}
}
void menuForNewBranch()
{

	int x = 0;
	int y = 0;


	for (; is_run(); delay_fps(10))
	{
		flushkey();
		transToLeftPort();
		setcolor(EGERGB(169, 167, 167));
		line(5, 0, 5, 645);
		line(5, 645, 1195, 645);
		line(1195, 0, 1195, 645);
		line(905, 0, 905, 645);
		setcolor(BLACK);
		transToRightPort();
		xyprintf(0, 0, "欢迎使用画板程序              ");
		xyprintf(0, 260, "1.清屏");
		xyprintf(0, 280, "2.画一个三角形");
		xyprintf(0, 300, "3.画一个圆");
		xyprintf(0, 320, "4.画一条线");
		xyprintf(0, 340, "5.画一个矩形");
		xyprintf(0, 360, "6.用鼠标画线或多边形");
		xyprintf(0, 380, "7.鼠绘");
		xyprintf(0, 400, "8.橡皮");
		xyprintf(0, 420, "9.后退");
		while (mousemsg())
		{
			msg = getmouse();
		}
		x = msg.x;
		y = msg.y;
		if ((y > 260 && y < 280 && msg.is_left() && x>910) || keystate(49))
		{
			transToLeftPort();
			clearviewport();
			transToRightPort();
		}
		if ((y > 280 && y < 300 && msg.is_left() && x>910) || keystate(50))
		{
			transToLeftPort();
		//	drawapoli();
			transToRightPort();
		}
		if ((y > 300 && y < 320 && msg.is_left() && x>910) || keystate(51))
		{
			transToLeftPort();
			Circle a = Circle();
			draw(a);
			transToRightPort();
		}
		if ((y > 320 && y < 340 && msg.is_left() && x>910) || keystate(52))
		{
			transToLeftPort();
		//	drawline();
			transToRightPort();
		}
		if ((y > 340 && y < 360 && msg.is_left() && x>910) || keystate(53))
		{
			transToLeftPort();
	//		drawabar();
			transToRightPort();
		}
		if ((y > 360 && y < 380 && msg.is_left() && x>910) || keystate(54))
		{
			transToLeftPort();
//			mouse();
			transToRightPort();
		}
		if ((y > 380 && y < 400 && msg.is_left() && x>910) || keystate(55))
		{
			transToLeftPort();
//			pixelline();
			transToRightPort();
		}
		if ((y > 400 && y < 420 && msg.is_left() && x>910) || keystate(56))
		{
			transToLeftPort();
			eraser();
			transToRightPort();
		}
		if ((y > 420 && y < 440 && msg.is_left() && x>910) || keystate(57))
		{
			transToRightPort();
			clearviewport();
			break;
		}
	}
}