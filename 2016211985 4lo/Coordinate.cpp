#include "Coordinate.h"



Coordinate::Coordinate()
{
	this->x = 100;//默认坐标
	this->y = 100;
}

Coordinate::Coordinate(int x, int y)
{
	this->x = x;//初始化坐标
	this->y = y;
}



void Coordinate::changeCoordinate(int x, int y)//更改坐标
{
	this->x = x;
	this->y = y;
}

int Coordinate::getX() const //获得x坐标
{
	return x;
}

int Coordinate::getY() const //获得y坐标
{
	return y;
}

void Coordinate::setX(int x)//对x坐标进行设置
{
	this->x = x;
}

void Coordinate::setY(int y)//对y坐标进行设置
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
	return ((this->x != another.x)||(this->y != another.y));
}

Coordinate& Coordinate::operator +=(const Coordinate& another)
{
	return Coordinate(this->x + another.x, this->y + another.y);
}
