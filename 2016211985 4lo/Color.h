#pragma once
//color
#include<graphics.h>

class Color
{
public:
	Color();
	Color(int color);
	void setColor(int color);
	int getColor();
	void operator =(const Color& another);
	bool operator ==(const Color& another);
	bool operator !=(const Color& another);
private:
	bool isColored;
	int color;
};

