#include "Color.h"

Color::Color()//默认1色填涂
{
	isColored = 1;
	color = 1;
}

Color::Color(string color)
{
	this->color = color;
	isColored = 1;
}

std::string Color::getColor()//获得颜色编码
{
	return color;
}

void Color::setColor(string color)//通过编码更改颜色
{
	this->color = color;
}