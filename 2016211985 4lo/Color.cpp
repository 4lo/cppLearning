#include "Color.h"

Color::Color()//Ĭ��1ɫ��Ϳ
{
	
}

Color::Color(int color)
{
	this->color = color;
	isColored = 1;
}

int Color::getColor()//�����ɫ����
{
	return color;
}

void Color::setColor(int color)//ͨ�����������ɫ
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

