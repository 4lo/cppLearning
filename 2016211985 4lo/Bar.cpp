#include "Bar.h"
#include "graphics.h"
using namespace std;
int Bar::barNumber = 0;

Bar::Bar(const Bar& a)
{
	this->barColor = a.barColor;
	this->leftup = a.leftup;
	this->rightdown = a.rightdown;
	barNumber++;
}

Bar::Bar(Coordinate leftup, Coordinate rightdown, Color color)
{
	this->leftup = leftup;
	this->rightdown = rightdown;
	barColor = color;
    barNumber++;
	/*�Ծ��ν��г�ʼ����������+1*/
}


Bar::~Bar()
{
	barNumber--;//ɾ������ʱ������1
	xyprintf(100,100,"����%d������",barNumber);
}

int Bar::getBarNumber()
{
	return barNumber;//���ؾ��ε�����
}

void Bar::draw()
{
	//int a[3] = barColor.getColor();
	setfillcolor(getColor());
	bar(leftup.getX(), leftup.getY(), rightdown.getX(), rightdown.getY());
}

void Bar::save()
{

}

Coordinate Bar::getLeftup()
{
	return leftup;
}

Coordinate Bar::getRightdown()
{
	return rightdown;
}