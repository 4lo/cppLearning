#include "GraphicsControl.h"
#include "graphics.h"



Graphics::Graphics()
{
	initgraph(1200, 650);
	line(5, 0, 5, 645);
	line(5, 645, 1195, 645);
	line(1195, 0, 1195, 645);
	line(905, 0, 905, 645);//绘制画板的基本界面
	setviewport(0, 0, 1190, 640, 1);//设置边框，不过没什么太大意义
	setbkcolor(EGERGB(255, 255, 255)); //设置背景颜色
	setcolor(BLACK);//设置字体颜色
	setfont(-15, 0, "楷体");//字体
}

Graphics::Graphics(int Width, int Height)
{
	initgraph(Width, Height);//自定义的肯定不如默认的好
}



void Graphics::closegraph()
{
	closegraph();//关闭
}
