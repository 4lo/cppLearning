#include "Color.h"

Color::Color()//默认1色填涂
{
	
}

Color::Color(int color)
{
	this->color = color;
	isColored = 1;
}

int Color::getColor()//获得颜色编码
{
	return color;
}

void Color::setColor(int color)//通过编码更改颜色
{
	this->color = color;
}

void Color::operator =(const Color& another)
{
	this->color = another.color;
	this->isColored = another.isColored;
}

bool Color::operator ==(const Color& another)
{
	return (this->color == another.color);
}

bool Color::operator !=(const Color& another)
{
	return (this->color != another.color);
}

