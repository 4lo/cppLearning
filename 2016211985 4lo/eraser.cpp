//eraser£¬inspired after "pixelline"£¬very useful

#include"handletrans.h"
extern mouse_msg msg;
void eraser()
{
	Sleep(500);//to optimize operation
	transToRightPort();
	clearviewport();
	xyprintf(0, 0, "°´CtrlÍË³öÏðÆ¤");
	transToRightPort();
	flushmouse();
	int i = 0, x[256] = { 0 }, y[256] = { 0 }, *p1, *p2;
	p1 = &x[i];
	p2 = &y[i];
	for (; is_run(); /*delay_fps(10000)*/)//Shortcoming : not fast enough to erase smoothly
	{
		if (keystate(0x1))//left key of mouse
		{
			transToLeftPort();
			mousepos(p1, p2);
			if (i % 256 == 255)
			{
				i = 0;
			}
			else i++;
			while (mousemsg())
			{
				msg = getmouse();
			}
			setviewport(x[i] + 10,  y[i] + 10, x[i] - 10, y[i] - 10);//centered on the mouse£¬set a 20x20 viewport
			clearviewport();
			flushmouse();
		}
		else if ((keystate(VK_CONTROL) == 1))break;
	}

}