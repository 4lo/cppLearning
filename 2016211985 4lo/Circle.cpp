#include "Circle.h"

int Circle::circleNumber = 0;


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
}

int Circle::getCircleNumber()
{
	return circleNumber;//����Բ�ĸ���
}