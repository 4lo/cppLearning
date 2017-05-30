#include "Circle.h"

int Circle::circleNumber = 0;

Circle::Circle(const Circle& a)
{
	this->Radius = a.Radius;
	this->CircleColor = a.CircleColor;
	this->CircleXY = a.CircleXY;
	Circle::circleNumber++;
}

Circle::Circle()
{
	this->Radius = 1;
	CircleXY.setX(1);
	CircleXY.setY(1);

	Circle::circleNumber++;
	/*对圆进行初始化，并数量+1*/
}

Circle::Circle(int radius, Coordinate CircleXY)
{
	this->Radius = radius;
	this->CircleXY = CircleXY;
	Circle::circleNumber++;
	/*对圆进行初始化，并数量+1*/
}


Circle::~Circle()
{
	//Circle::circleNumber--;//删除圆时数量—1
	//xyprintf(100, 200, "存在%d个圆形", circleNumber);
}

int Circle::getCircleNumber()
{
	return circleNumber;//返回圆的个数
}

int Circle::getRadius()
{
	return Radius;
}

void Circle::draw()
{
	circle(CircleXY.getX(), CircleXY.getY(), Radius);
}

Coordinate Circle::getCenter()
{
	return CircleXY;
}
void Circle::save()
{
	string temp = "CIRCLE\\CIRCLE" + to_string(circleNumber) + ".txt";
	ofstream save(temp);
	save << CircleXY.getX() << " "
		<< CircleXY.getY() << " "
		<< getRadius() << " "
        << getColor() << endl;
	save.close();
}