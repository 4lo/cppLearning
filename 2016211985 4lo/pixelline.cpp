#include"handletrans.h"
#include"pixelline.h"

extern mouse_msg msg;
int pixelline()
{
	Sleep(500);
	transToRightPort();
	clearviewport();
	xyprintf(0, 0, "（松手即退出）");
	transToLeftPort();
	int i = 0, x[256] = { 0 }, y[256] = { 0 }, *p1, *p2;//定义足够大的数组来存储鼠标
	p1 = &x[i];
	p2 = &y[i];
	while (1)
	{
		if (msg.is_left())
			break;
	}
	//getkey();
	//获取当前鼠标位置并用指针存储，避免了从原点画线的尴尬
	//i++;
	while (msg.is_left())
	{
		
		mousepos(p1, p2);
		for (; is_run(); /*delay_fps(10000)*/)
		{
			p1 = &x[i];//持续获得
			p2 = &y[i];
			msg = getmouse();
			if (keystate(0x1))
			{
				mousepos(p1, p2);
				line(x[i], y[i], x[i - 1], y[i - 1]);
				if (i % 256 == 255)
				{
					i = 0;
				}
				else i++;

				flushmouse();//这种flush好像和我理解的不一样，目测没有用
				flushkey();
				//if (keystate(VK_CONTROL) == 0)
				//break;
			}
			//if (keystate(VK_CONTROL) == 0)//Ctrl弹开则退出
			if (msg.is_left() != 0)
				break;
		}
		flushmouse();
		flushkey();//目测没用
		transToRightPort();
		clearviewport();//清屏
		return 0;
	}
	

}