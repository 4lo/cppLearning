#include "Color.h"

Color::Color()//Ĭ��1ɫ��Ϳ
{
	
}

Color::Color(int color)
{
	this->co = new int(1);
	delete this->co;
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