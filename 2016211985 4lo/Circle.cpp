#include "Circle.h"

int Circle::circleNumber = 0;

Circle::Circle(const Circle& a)
{
	this->Radius = a.Radius;
	this->CircleColor = a.CircleColor;
	this->CircleXY = a.CircleXY;
	Circle::circleNumber++;
}

Circle::Circle(int radius, Coordinate CircleXY)
{
	this->Radius = radius;
	this->CircleXY = CircleXY;
	Circle::circleNumber++;
	/*��Բ���г�ʼ����������+1*/
}


Circle::~Circle()
{
	Circle::circleNumber--;//ɾ��Բʱ������1
	xyprintf(100, 200, "����%d��Բ��", circleNumber);
}

int Circle::getCircleNumber()
{
	return circleNumber;//����Բ�ĸ���
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