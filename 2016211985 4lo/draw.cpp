#include"draw.h"
using namespace ege;
extern mouse_msg msg;
void draw(Shape &shape)
{
	int x = 0, y = 0;
	Sleep(100);//��ֹ�󴥣���Ϊ������׶�ε��
	transToRightPort();
	clearviewport();
	transToRightPort();
	xyprintf(0, 10, "1.�����");
	xyprintf(0, 30, "2.�ü���");
	transToLeftPort();
	Coordinate a1;
	Coordinate a2;
	if (Bar *bar = dynamic_cast<Bar*>(&shape))
	{
		for (; is_run(); delay_fps(10))//������
		{
			while (mousemsg())
			{
				msg = getmouse();
			}
			x = msg.x;
			y = msg.y;

			if ((y > 10 && y < 30 && msg.is_left() && x>910) || keystate(49))//������֧
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
					}//�����ṹ���getmouse��ȡ������꣬������a��
					if (keystate(0x1))
					{
						x++;
					}
					transToRightPort();
					xyprintf(0, 100, "�Ѽ�¼��%d����", x);
					transToLeftPort();
					if (x == 2)break;
				}
				a1 = Coordinate(a[0], a[1]);
				a2 = Coordinate(a[2], a[3]);
				throw a1, a2;
				//��¼���εĻ�����Ϣ
				transToRightPort();
				break;
			}
			if ((y > 30 && y < 50 && msg.is_left() && x>910) || keystate(50))//�����֧
			{
				transToRightPort();
				clearviewport();
				xyprintf(0, 0, "���Ͻǵ�x");
				a1.setX(getInteger());
				setfont(-15, 0, "����");
				xyprintf(0, 0, "���Ͻǵ�y");
				a1.setY(getInteger());
				setfont(-15, 0, "����");
				xyprintf(0, 0, "���½ǵ�x");
				a2.setX(getInteger());
				setfont(-15, 0, "����");
				xyprintf(0, 0, "���½ǵ�y");
				a2.setY(getInteger());
				setfont(-15, 0, "����");
				break;
			}
		}
		transToRightPort();//�����������
		Sleep(500);//������֧�����Ｏ������
		clearviewport();
		choiceOfColor();//��ӡ����ɫѡ��
		for (; is_run(); delay_fps(10))//������
		{
			while (mousemsg())
			{
				msg = getmouse();
			}
			x = msg.x;
			y = msg.y;
			if ((y > 0 && y < 20 && msg.is_left() && x>910) || keystate(49))//��ɫ
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 1);
				setfillcolor(RED);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 20 && y < 40 && msg.is_left() && x>910) || keystate(50))//��ɫ
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(BLACK);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 40 && y < 60 && msg.is_left() && x>910) || keystate(51))//��ɫ
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(BLUE);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 60 && y < 80 && msg.is_left() && x>910) || keystate(52))//��ɫ
			{
				transToLeftPort();
				bar = new Bar(a1, a2, 2);
				setfillcolor(YELLOW);
				bar->draw();
				bar->save();
				break;
			}
			if ((y > 80 && y < 100 && msg.is_left() && x>910) || keystate(53))//��ɫ
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
					}//�����ṹ���getmouse��ȡ������꣬������a��
					if (keystate(0x1))
					{
						x++;
					}
					transToRightPort();
					xyprintf(0, 100, "�Ѽ�¼��%d����", x);
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
				xyprintf(0, 0, "��������뾶r�����س���");
				a1.setX(getInteger());
				setfont(-15, 0, "����");
				xyprintf(0, 0, "Բ��x�����س���         ");
				a2.setX(getInteger());
				setfont(-15, 0, "����");
				xyprintf(0, 0, "Բ��y�����س���         ");
				a2.setY(getInteger());
				setfont(-15, 0, "����");
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