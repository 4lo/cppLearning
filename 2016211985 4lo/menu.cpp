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
		xyprintf(0, 0, "��ӭʹ�û������              ");
		xyprintf(0, 260, "1.�ػ�");
		xyprintf(0, 280, "2.��һ��������");
		xyprintf(0, 300, "3.��һ��Բ");
		xyprintf(0, 320, "4.��һ����");
		xyprintf(0, 340, "5.��һ������");
		xyprintf(0, 360, "6.������");
		xyprintf(0, 380, "7.��Ƥ");
		xyprintf(0, 420, "8.����");
		while (mousemsg())
		{
			msg = getmouse();
		}
		if ((msg.y > 260 && msg.y < 280 && msg.is_left() && msg.x>910) || keystate(49))
		{
			transToLeftPort();
			clearviewport();
			transToRightPort();
		}
		if ((msg.y > 280 && msg.y < 300 && msg.is_left() && msg.x>910) || keystate(50))
		{
			transToLeftPort();
			Delta a = Delta();
			a.draw();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 300 && msg.y < 320 && msg.is_left() && msg.x>910) || keystate(51))
		{
			transToLeftPort();
			Circle a = Circle();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 320 && msg.y < 340 && msg.is_left() && msg.x>910) || keystate(52))
		{
			transToLeftPort();
			//	drawline();
			transToRightPort();
		}
		if ((msg.y > 340 && msg.y < 360 && msg.is_left() && msg.x>910) || keystate(53))
		{
			transToLeftPort();
			Bar a = Bar();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 360 && msg.y < 380 && msg.is_left() && msg.x>910) || keystate(54))
		{
			transToLeftPort();
			//			mouse();
			transToRightPort();
		}
		if ((msg.y > 380 && msg.y < 400 && msg.is_left() && msg.x>910) || keystate(55))
		{
			transToLeftPort();
			eraser();
			transToRightPort();
		}
		if ((msg.y > 420 && msg.y < 440 && msg.is_left() && msg.x>910) || keystate(56))
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
		xyprintf(0, 0, "��ӭʹ�û������              ");
		xyprintf(0, 260, "1.����");
		xyprintf(0, 280, "2.��һ��������");
		xyprintf(0, 300, "3.��һ��Բ");
		xyprintf(0, 320, "4.��һ����");
		xyprintf(0, 340, "5.��һ������");
		xyprintf(0, 360, "6.������");
		xyprintf(0, 380, "7.��Ƥ");
		xyprintf(0, 420, "8.����");
		while (mousemsg())
		{
			msg = getmouse();
		}
		if ((msg.y > 260 && msg.y < 280 && msg.is_left() && msg.x>910) || keystate(49))
		{
			transToLeftPort();
			clearviewport();
			transToRightPort();
		}
		if ((msg.y > 280 && msg.y < 300 && msg.is_left() && msg.x>910) || keystate(50))
		{
			transToLeftPort();
			Delta a = Delta();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 300 && msg.y < 320 && msg.is_left() && msg.x>910) || keystate(51))
		{
			transToLeftPort();
			Circle a = Circle();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 320 && msg.y < 340 && msg.is_left() && msg.x>910) || keystate(52))
		{
			transToLeftPort();
		//	drawline();
			transToRightPort();
		}
		if ((msg.y > 340 && msg.y < 360 && msg.is_left() && msg.x>910) || keystate(53))
		{
			transToLeftPort();
			Bar a = Bar();
			draw(a);
			transToRightPort();
		}
		if ((msg.y > 360 && msg.y < 380 && msg.is_left() && msg.x>910) || keystate(54))
		{
			transToLeftPort();
			pixelline();
			transToRightPort();
		}
		if ((msg.y > 380 && msg.y < 400 && msg.is_left() && msg.x>910) || keystate(55))
		{
			transToLeftPort();
      		eraser();
			transToRightPort();
		}
		if ((msg.y > 420 && msg.y < 440 && msg.is_left() && msg.x>910) || keystate(56))
		{
			transToRightPort();
			clearviewport();
			break;
		}
	}
}