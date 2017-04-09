#include "Circle.h"

int Circle::circleNumber = 0;


Circle::Circle(int radius, Coordinate CircleXY)
{
	this->Radius = radius;
	this->CircleXY = CircleXY;
	Circle::circleNumber++;
	/*对圆进行初始化，并数量+1*/
}


Circle::~Circle()
{
	Circle::circleNumber--;//删除圆时数量—1
}

int Circle::getCircleNumber()
{
	return circleNumber;//返回圆的个数
}