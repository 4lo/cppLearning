#include "Color.h"
#include <string.h>

Color::Color()//默认1色填涂
{
	isColored = 1;
	color_ = 1;
}

Color::Color(int color)
{
	color_ = color;
	isColored = 1;
}

int Color::getColor()//获得颜色编码
{
	return color_;
}

void Color::setColor(int color)//通过编码更改颜色
{
	color_ = color;
}