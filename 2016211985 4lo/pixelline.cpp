#include"handletrans.h"
#include"pixelline.h"

extern mouse_msg msg;
int pixelline()
{
	Sleep(500);
	transToRightPort();
	clearviewport();
	xyprintf(0, 0, "�����ּ��˳���");
	transToLeftPort();
	int i = 0, x[256] = { 0 }, y[256] = { 0 }, *p1, *p2;//�����㹻����������洢���
	p1 = &x[i];
	p2 = &y[i];
	while (1)
	{
		if (msg.is_left())
			break;
	}
	//getkey();
	//��ȡ��ǰ���λ�ò���ָ��洢�������˴�ԭ�㻭�ߵ�����
	//i++;
	while (msg.is_left())
	{
		
		mousepos(p1, p2);
		for (; is_run(); /*delay_fps(10000)*/)
		{
			p1 = &x[i];//�������
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

				flushmouse();//����flush����������Ĳ�һ����Ŀ��û����
				flushkey();
				//if (keystate(VK_CONTROL) == 0)
				//break;
			}
			//if (keystate(VK_CONTROL) == 0)//Ctrl�������˳�
			if (msg.is_left() != 0)
				break;
		}
		flushmouse();
		flushkey();//Ŀ��û��
		transToRightPort();
		clearviewport();//����
		return 0;
	}
	

}