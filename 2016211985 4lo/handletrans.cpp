#include "handletrans.h"
#include "graphics.h"


void left()//将操控界面切换到左侧，用来绘画
{
	setviewport(0, 0, 906, 640, 1);
}


void right()//将屏幕切换到右侧来进行操作
{
	setviewport(910, 0, 1190, 640, 1);
}

void recre()//对画板进行恢复初始值（仅边框）
{
	setviewport(0, 0, 1200, 650, 1);
}