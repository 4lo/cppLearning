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
	setColor(color);
    barNumber++;
	/*对矩形进行初始化并且数量+1*/
}


Bar::~Bar()
{
	barNumber--;//删除矩形时数量—1
	//xyprintf(100,100,"存在%d个矩形",barNumber);
}

int Bar::getBarNumber()
{
	return barNumber;//返回矩形的数量
}

void Bar::draw()
{
	//int a[3] = barColor.getColor();
	int a = getColor();
	switch (a)
	{
	case 1:setfillcolor(WHITE);
		break;
	case 2:setfillcolor(BLACK);
		break;
	case 3:setfillcolor(BLUE);
		break;
	case 4:setfillcolor(RED);
		break;
	case 5:setfillcolor(YELLOW);
		break;
	default:setfillcolor(EGERGB(255, 255, 255));
	}
	bar(leftup.getX(), leftup.getY(), rightdown.getX(), rightdown.getY());
}

void Bar::save()
{
	string temp = "BAR\\BAR" + to_string(barNumber) + ".txt";
	ofstream save(temp);
	save << getLeftup().getX() << " "
		<< getLeftup().getY() << " "
		<< getRightdown().getX() << " "
		<< getRightdown().getY() << " "
		<< getColor() << endl;
	save.close();
}

Coordinate Bar::getLeftup()
{
	return leftup;
}

Coordinate Bar::getRightdown()
{
	return rightdown;
}