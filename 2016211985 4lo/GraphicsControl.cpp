#include "GraphicsControl.h"




Graphics::Graphics()
{
	initgraph(1200, 650);
	line(5, 0, 5, 645);
	line(5, 645, 1195, 645);
	line(1195, 0, 1195, 645);
	line(905, 0, 905, 645);//set a fundamental interface
	setviewport(0, 0, 1190, 640, 1);//avoid destroying the border line when drawing and clearviewport
	setbkcolor(EGERGB(255, 255, 255)); //…Ë÷√±≥æ∞—’…´
	setcolor(BLACK);//set color of character
	setfont(-15, 0, "ø¨ÃÂ");
}

Graphics::Graphics(int Width, int Height)
{
	initgraph(Width, Height);
}



void Graphics::closegraph()
{
	closegraph();
}
