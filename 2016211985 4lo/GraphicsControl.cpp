#include "GraphicsControl.h"
#include "graphics.h"



Graphics::Graphics()
{
	initgraph(1200, 650);
	line(5, 0, 5, 645);
	line(5, 645, 1195, 645);
	line(1195, 0, 1195, 645);
	line(905, 0, 905, 645);//���ƻ���Ļ�������
	setviewport(0, 0, 1190, 640, 1);//���ñ߿򣬲���ûʲô̫������
	setbkcolor(EGERGB(255, 255, 255)); //���ñ�����ɫ
	setcolor(BLACK);//����������ɫ
	setfont(-15, 0, "����");//����
}

Graphics::Graphics(int Width, int Height)
{
	initgraph(Width, Height);//�Զ���Ŀ϶�����Ĭ�ϵĺ�
}



void Graphics::closegraph()
{
	closegraph();//�ر�
}
