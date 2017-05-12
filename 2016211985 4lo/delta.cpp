#include "delta.h"
#include <graphics.h>
Delta::Delta(Coordinate a, Coordinate b, Coordinate c, Color color)
{
	this->a = a;
	this->b = b;
	this->c = c;
	setColor(color);
}

void Delta::draw()
{
	int deltaPoints[6];
	deltaPoints[0] = a.getX();
	deltaPoints[1] = a.getY();
	deltaPoints[2] = b.getX();
	deltaPoints[3] = b.getY();
	deltaPoints[4] = c.getX();
	deltaPoints[5] = c.getY();
	fillpoly(3, deltaPoints);
}

void Delta::save()
{

}