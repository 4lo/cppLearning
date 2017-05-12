#include "Bar.h"
#include "graphics.h"
using namespace std;
int Bar::barNumber = 0;

Bar::Bar(const Bar& a)
{
	this->barColor = a.barColor;
	this->leftup = a.leftup;
	this->rightdown = a.rightdown;
	barNumber++;
}

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
	xyprintf(100,100,"存在%d个矩形",barNumber);
}

int Bar::getBarNumber()
{
	return barNumber;//返回矩形的数量
}

void Bar::draw()
{
	//int a[3] = barColor.getColor();
	setfillcolor(getColor());
	bar(leftup.getX(), leftup.getY(), rightdown.getX(), rightdown.getY());
}

void Bar::save()
{

}

Coordinate Bar::getLeftup()
{
	return leftup;
}

Coordinate Bar::getRightdown()
{
	return rightdown;
}