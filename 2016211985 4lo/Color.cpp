#include "Color.h"
#include <string.h>

Color::Color()//Ĭ��1ɫ��Ϳ
{
	isColored = 1;
	color_ = 1;
}

Color::Color(int color)
{
	color_ = color;
	isColored = 1;
}

int Color::getColor()//�����ɫ����
{
	return color_;
}

void Color::setColor(int color)//ͨ�����������ɫ
{
	color_ = color;
}