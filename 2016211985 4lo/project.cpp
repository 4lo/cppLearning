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
	for (; is_run(); delay_fps(10))//ѭ��������֤�����������
	{
		flushkey();
		setbkcolor(EGERGB(255, 255, 255));
		recreateBorder();//ȫ���Ӵ���Ȼ����
		setcolor(EGERGB(169, 167, 167));
		line(5, 0, 5, 645);
		line(5, 645, 1195, 645);
		line(1195, 0, 1195, 645);
		line(905, 0, 905, 645);
		setcolor(BLACK);
		transToRightPort();
		xyprintf(0, 0, "��ӭ�����������                            ");//��ӭ����
		xyprintf(0, 15, "�Ƿ��ȡ  (��shift�л����뷨��Ӣ��)");
		xyprintf(0, 50, "1.��ȡ�ҵ���ʷ�ļ�");
		xyprintf(0, 70, "0.�½�����");
		while (mousemsg())//�������ж���
		{
			msg = getmouse();
		}
		if ((msg.y > 40 && msg.y < 70 && msg.is_left() && msg.x>910) || keystate(49))//��ȡ
		{
			transToRightPort();
			flushkey();
			clearviewport();
//			readfile();
			menuForReadBranch();
			
		}
		if ((msg.y > 70 && msg.y < 90 && msg.is_left() && msg.x>910) || keystate(50))//�½�
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