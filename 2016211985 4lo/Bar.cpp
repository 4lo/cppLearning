#include "Bar.h"

int Bar::barNumber = 0;

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
}

int Bar::getBarNumber()
{
	return barNumber;//���ؾ��ε�����
}


void drawBar()
{
	Sleep(100);
	right();

}