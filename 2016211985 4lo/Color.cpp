#include "Color.h"

Color::Color()//Ĭ��1ɫ��Ϳ
{
	isColored = 1;
	color = 1;
}

Color::Color(ege::color_t color)
{
	this->color = color;
	isColored = 1;
}

ege::color_t Color::getColor()//�����ɫ����
{
	return color;
}

void Color::setColor(ege::color_t color)//ͨ�����������ɫ
{
	this->color = color;
}