#include "Coordinate.h"



Coordinate::Coordinate()
{
	this->x = 100;//Ĭ������
	this->y = 100;
}

Coordinate::Coordinate(int x, int y)
{
	this->x = x;//��ʼ������
	this->y = y;
}



void Coordinate::changeCoordinate(int x, int y)//��������
{
	this->x = x;
	this->y = y;
}

int Coordinate::getX()//���x����
{
	return x;
}

int Coordinate::getY()//���y����
{
	return y;
}

void Coordinate::setX(int x)//��x�����������
{
	this->x = x;
}

void Coordinate::setY(int y)//��y�����������
{
	this->y = y;
}

std::string Coordinate::getXYs()
{
	return "00";
}
