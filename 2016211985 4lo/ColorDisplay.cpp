#include"ColorDisplay.h"

void choiceOfColor()
{
	transToRightPort();
	xyprintf(0, 0, "1.��ɫ                                ");
	xyprintf(0, 20, "2.��ɫ                                ");
	xyprintf(0, 40, "3.��ɫ                                ");
	xyprintf(0, 60, "4.��ɫ                                ");
	xyprintf(0, 80, "5.��ɫ                                ");
	transToLeftPort();
}

void clearcoc()//������ס��ɫѡ����Ŀ��ʡȥ���Ӵ����л�
{
	transToRightPort();
	xyprintf(0, 0, "                               ");
	xyprintf(0, 20, "                               ");
	xyprintf(0, 40, "                               ");
	xyprintf(0, 60, "                               ");
	xyprintf(0, 80, "                               ");
	transToLeftPort();
}