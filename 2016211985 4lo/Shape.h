#pragma once
#include"Color.h"
#include"Coordinate.h"
#include<string>
#include"Coordinate.h"
using std::string;
class Shape
{
private:
	Color color;
	Coordinate XYs;
public:
	Shape();
	~Shape();
	virtual void draw() = 0;
	static int ShapeNumber;
};

