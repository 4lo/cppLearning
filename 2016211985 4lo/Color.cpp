#include "Color.h"

Color::Color()//Ĭ��1ɫ��Ϳ
{
	isColored = 1;
	color = 1;
}

Color::Color(string color)
{
	this->color = color;
	isColored = 1;
}

std::string Color::getColor()//�����ɫ����
{
	return color;
}

void Color::setColor(string color)//ͨ�����������ɫ
{
	this->color = color;
}