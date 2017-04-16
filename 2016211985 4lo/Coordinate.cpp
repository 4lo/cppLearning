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

int Coordinate::getX()//获得x坐标
{
	return x;
}

int Coordinate::getY()//获得y坐标
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
