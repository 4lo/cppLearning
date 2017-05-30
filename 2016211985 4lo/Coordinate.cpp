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

int Coordinate::getX() const //���x����
{
	return x;
}

int Coordinate::getY() const //���y����
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

bool Coordinate::operator == (const Coordinate& another)
{
	/*if ((this->x == another.x) && (this->y = another.y))
	{
		return true;
	}
	else return false;*/
	return ((this->x == another.x) && (this->y = another.y));
}

Coordinate Coordinate::operator + (const Coordinate& another)
{
	Coordinate midPoint;
	midPoint.setX((this->x + another.x) / 2);
	midPoint.setY((this->y + another.y) / 2);
	return midPoint;
}

void Coordinate::operator = (const Coordinate& another)
{
	this->x = another.getX();
	this->y = another.getY();
}

bool Coordinate::operator != (const Coordinate& another)
{
	//if()
	return true;
}

