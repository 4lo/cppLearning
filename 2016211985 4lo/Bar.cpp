#include "Bar.h"

int Bar::barNumber = 0;

Bar::Bar(Coordinate leftup, Coordinate rightdown, Color color)
{
	this->leftup = leftup;
	this->rightdown = rightdown;
	barColor = color;
    barNumber++;
	/*对矩形进行初始化并且数量+1*/
}


Bar::~Bar()
{
	barNumber--;//删除矩形时数量—1
}

int Bar::getBarNumber()
{
	return barNumber;//返回矩形的数量
}


void drawBar()
{
	Sleep(100);
	right();

}