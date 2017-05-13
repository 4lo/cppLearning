#include "Shape.h"



Shape::Shape()
{

}


Shape::~Shape()
{

}

void Shape::setColor(Color color)
{
	this->color = color;
}

int Shape::getColor()
{
	return color.getColor();
}