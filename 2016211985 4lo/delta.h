#pragma once
#include "Shape.h"


class Delta : public Shape
{
public:
	static int deltaNumber;
	void draw();
	void save();
	Delta(Coordinate a, Coordinate b, Coordinate c, Color color);
private:
	Coordinate a;
	Coordinate b;
	Coordinate c;
};