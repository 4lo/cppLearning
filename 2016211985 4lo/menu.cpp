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
		xyprintf(0, 360, "6.鼠标绘制");
		xyprintf(0, 380, "7.橡皮");
		xyprintf(0, 420, "8.后退");
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
			Delta a = Delta();
			draw(a);
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
			Bar a = Bar();
			draw(a);
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
			eraser();
			transToRightPort();
		}
		if ((y > 420 && y < 440 && msg.is_left() && x>910) || keystate(56))
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
		xyprintf(0, 360, "6.鼠标绘制");
		xyprintf(0, 380, "7.橡皮");
		xyprintf(0, 420, "8.后退");
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
			Delta a = Delta();
			draw(a);
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
			Bar a = Bar();
			draw(a);
			transToRightPort();
		}
		if ((y > 360 && y < 380 && msg.is_left() && x>910) || keystate(54))
		{
			transToLeftPort();
			pixelline();
			transToRightPort();
		}
		if ((y > 380 && y < 400 && msg.is_left() && x>910) || keystate(55))
		{
			transToLeftPort();
      		eraser();
			transToRightPort();
		}
		if ((y > 420 && y < 440 && msg.is_left() && x>910) || keystate(56))
		{
			transToRightPort();
			clearviewport();
			break;
		}
	}
}