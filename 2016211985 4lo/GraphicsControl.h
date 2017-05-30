#pragma once
#include<graphics.h>
/*新建以及关闭画板的类*/
class Graphics
{
public:
	Graphics();//默认新建一个1200*650的画布，背景为白色
	Graphics(int Width, int Height);//新建自定义大小的背景
	void closegraph();//关闭画布
};

