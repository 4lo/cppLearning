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
	Graphics *newgraph = new Graphics();//�½�һ������
	int x = 0, y = 0, pri = 1;//xy ������¼���  pri�Ѿ�2017���ʱ��û��ʵ������
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
		x = msg.x;
		y = msg.y;
		if ((y > 40 && y < 70 && msg.is_left() && x>910) || keystate(49))//��ȡ
		{
			transToRightPort();
			flushkey();
			clearviewport();
//			readfile();
			menuForReadBranch();
			
		}
		if ((y > 70 && y < 90 && msg.is_left() && x>910) || keystate(50))//�½�
		{
			transToRightPort();
			flushkey();
			clearviewport();
			menuForNewBranch();
		}
	}
	delete[] newgraph;
	return 0;
}