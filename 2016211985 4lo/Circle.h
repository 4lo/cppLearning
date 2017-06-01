#pragma once
/*Ô²Àà£¨¿ÕÐÄ£©*/
#include "Color.h"
#include "Shape.h"
#include "Circle.h"
#include <fstream>
using namespace std;
class Circle : public Shape
{
public:
	Circle(const Circle& a);
	Circle(int radius, Coordinate Circle);
	Circle();
	~Circle();
	static int circleNumber;
	int getCircleNumber();
	void draw();
	void save();
	int getRadius();
	Coordinate getCenter();
	bool operator <(const Circle& another);//compare radius
	bool operator >(const Circle& another);//compare radius
private:
	int Radius;
	Coordinate CircleXY;
	Color CircleColor;
};

