#pragma once
#include "Shape.h"
#include <graphics.h>
#include <fstream>


class Delta : public Shape
{
public:
	static int deltaNumber;
	void draw();
	void save();
	Delta();
	Delta(Coordinate a, Coordinate b, Coordinate c, Color color);
private:
	Coordinate a;
	Coordinate b;
	Coordinate c;
};