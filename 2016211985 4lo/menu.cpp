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
		xyprintf(0, 360, "6.����껭�߻�����");
		xyprintf(0, 380, "7.���");
		xyprintf(0, 400, "8.��Ƥ");
		xyprintf(0, 420, "9.����");
		while (mousemsg())
		{
			msg = getmouse();
		}
		x = msg.x;
		y = msg.y;

		if ((y > 260 && y < 280 && msg.is_left() && x>910) || keystate(49))//�������Ļ��֧
		{
			transToLeftPort();
			clearviewport();
			transToRightPort();
		}
		if ((y > 280 && y < 300 && msg.is_left() && x>910) || keystate(50))//������η�֧
		{
			transToLeftPort();
			Delta *delta = new Delta();
			transToRightPort();
		}
		if ((y > 300 && y < 320 && msg.is_left() && x>910) || keystate(51))//��Բ��֧
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 320 && y < 340 && msg.is_left() && x>910) || keystate(52))//��ֱ�߷�֧
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 340 && y < 360 && msg.is_left() && x>910) || keystate(53))//�����η�֧
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 360 && y < 380 && msg.is_left() && x>910) || keystate(54))//��껭����κ�ֱ��
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 380 && y < 400 && msg.is_left() && x>910) || keystate(55))//��껭������
		{
			transToLeftPort();
			//drawcircle();
			transToRightPort();
		}
		if ((y > 400 && y < 420 && msg.is_left() && x>910) || keystate(56))//��Ƥ
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
		xyprintf(0, 0, "��ӭʹ�û������              ");
		xyprintf(0, 260, "1.����");
		xyprintf(0, 280, "2.��һ��������");
		xyprintf(0, 300, "3.��һ��Բ");
		xyprintf(0, 320, "4.��һ����");
		xyprintf(0, 340, "5.��һ������");
		xyprintf(0, 360, "6.����껭�߻�����");
		xyprintf(0, 380, "7.���");
		xyprintf(0, 400, "8.��Ƥ");
		xyprintf(0, 420, "9.����");
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