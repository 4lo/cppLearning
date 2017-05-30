#include"draw.h"
using namespace ege;
extern mouse_msg msg;
void draw(Shape &shape)
{
	int x = 0, y = 0;
	Sleep(100);//防止误触，因为鼠标容易多次点击
	transToRightPort();
	clearviewport();
	transToRightPort();
	xyprintf(0, 10, "1.用鼠标");
	xyprintf(0, 30, "2.用键盘");
	transToLeftPort();
	Coordinate a1;
	Coordinate a2;
	if (Bar *bar = dynamic_cast<Bar*>(&shape))
	{
		for (; is_run(); delay_fps(10))//监控鼠标
		{
			while (mousemsg())
			{
				msg = getmouse();
			}
			x = msg.x;
			y = msg.y;

			if ((y > 10 && y < 30 && msg.is_left() && x>910) || keystate(49))//用鼠标分支
			{
				transToRightPort();
				clearviewport();
				Sleep(100);
				transToLeftPort();
				int a[100], x = 0;
				for (; is_run(); delay_fps(10))
				{
					while (mousemsg())
					{
						msg = getmouse();
						a[x * 2] = msg.x;
						a[x * 2 + 1] = msg.y;
					}//用鼠标结构体和getmouse获取点的坐标，并存在a中
					if (keystate(0x1))
					{
						x++;
					}
					transToRightPort();
					xyprintf(0, 100, "已记录了%d个点", x);
					transToLeftPort();
					if (x == 2)break;
				}
				a1 = Coordinate(a[0], a[1]);
				a2 = Coordinate(a[2], a[3]);
				throw a1, a2;
				//记录矩形的基本信息
				transToRightPort();
				break;
			}
			if ((y > 30 && y < 50 && msg.is_left() && x>910) || keystate(50))//键入分支
			{
				transToRightPort();
				clearviewport();
				xyprintf(0, 0, "左上角点x");
				a1.setX(getInteger());
				setfont(-15, 0, "楷体");
				xyprintf(0, 0, "左上角点y");
				a1.setY(getInteger());
				setfont(-15, 0, "楷体");
				xyprintf(0, 0, "右下角点x");
				a2.setX(getInteger());
				setfont(-15, 0, "楷体");
				xyprintf(0, 0, "右下角点y");
				a2.setY(getInteger());
				setfont(-15, 0, "楷体");
				break;
			}
		}
		transToRightPort();//进入操作界面
		Sleep(500);//两个分支从这里集合起来
		clearviewport();
		choiceOfColor();//打印了颜色选择
		for (; is_run(); delay_fps(10))//监控鼠标
		{
			while (mousemsg())
			{
				msg = getmouse();
			}
			x = msg.x;
			y = msg.y;
			if ((y > 0 && y < 20 && msg.is_left() && x>910) || keystate(49))//红色
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 1);
				setfillcolor(RED);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 20 && y < 40 && msg.is_left() && x>910) || keystate(50))//黑色
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(BLACK);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 40 && y < 60 && msg.is_left() && x>910) || keystate(51))//蓝色
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(BLUE);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 60 && y < 80 && msg.is_left() && x>910) || keystate(52))//黄色
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(YELLOW);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 80 && y < 100 && msg.is_left() && x>910) || keystate(53))//白色
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(EGERGB(255, 255, 255));
				bar->draw();
				bar->save();
				break;
				
			}
		}
	}
	if (Circle *circle = dynamic_cast<Circle*>(&shape))
	{
		for (; is_run(); delay_fps(10))
		{
			while (mousemsg())
			{
				msg = getmouse();
			}
			x = msg.x;
			y = msg.y;
			if ((y > 10 && y < 30 && msg.is_left() && x>910) || keystate(49))
			{
				transToRightPort();
				clearviewport();
				Sleep(500);
				transToLeftPort();
				int a[100], x = 0;
				for (; is_run(); delay_fps(10))
				{
					while (mousemsg())
					{
						msg = getmouse();
						a[x * 2] = msg.x;
						a[x * 2 + 1] = msg.y;
					}//用鼠标结构体和getmouse获取点的坐标，并存在a中
					if (keystate(0x1))
					{
						x++;
					}
					transToRightPort();
					xyprintf(0, 100, "已记录了%d个点", x);
					transToLeftPort();
					if (x == 2)break;
				}
				a1.setX((a[0] - a[2])*(a[0] - a[2]));
				a1.setY((a[1] - a[3])*(a[1] - a[3]));
				a1.setX(sqrt(a1.getX() + a1.getY()));
				a2.setX(a[0]);
				a2.setY(a[1]);
				transToRightPort();
				break;
			}
			if ((y > 30 && y < 50 && msg.is_left() && x>910) || keystate(50))
			{
				transToRightPort();
				clearviewport();
				xyprintf(0, 0, "依次输入半径r（按回车）");
				a1.setX(getInteger());
				setfont(-15, 0, "楷体");
				xyprintf(0, 0, "圆心x（按回车）         ");
				a2.setX(getInteger());
				setfont(-15, 0, "楷体");
				xyprintf(0, 0, "圆心y（按回车）         ");
				a2.setY(getInteger());
				setfont(-15, 0, "楷体");
				transToLeftPort();
				break;
			}
		}
		transToLeftPort();
		circle = new Circle(a1.getX(), a2);
		circle->draw();
		circle->save();
		transToRightPort();
		clearviewport();
		transToLeftPort();
	}

	

}