#include"ColorDisplay.h"

void choiceOfColor()
{
	transToRightPort();
	xyprintf(0, 0, "1.红色                                ");
	xyprintf(0, 20, "2.黑色                                ");
	xyprintf(0, 40, "3.蓝色                                ");
	xyprintf(0, 60, "4.黄色                                ");
	xyprintf(0, 80, "5.白色                                ");
	transToLeftPort();
}

void clearcoc()//用来盖住颜色选择项目，省去了视窗的切换
{
	transToRightPort();
	xyprintf(0, 0, "                               ");
	xyprintf(0, 20, "                               ");
	xyprintf(0, 40, "                               ");
	xyprintf(0, 60, "                               ");
	xyprintf(0, 80, "                               ");
	transToLeftPort();
}