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

ege::color_t Shape::getColor()
{
	return color.getColor();
}