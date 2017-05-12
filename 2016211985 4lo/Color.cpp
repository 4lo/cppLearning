#include "Color.h"

Color::Color()//默认1色填涂
{
	isColored = 1;
	color = 1;
}

Color::Color(ege::color_t color)
{
	this->color = color;
	isColored = 1;
}

ege::color_t Color::getColor()//获得颜色编码
{
	return color;
}

void Color::setColor(ege::color_t color)//通过编码更改颜色
{
	this->color = color;
}