#include "documents.h"

/*void save(Shape* shape)
{
	Bar *bar;
	Circle *cirlce;
	Delta *delta;
	if ((bar = dynamic_cast<Bar*>(shape)) != 0)
	{
		string temp = "BAR\\BAR" +  std::to_string(--bar->barNumber) + ".txt";
		ofstream a(temp);
		a << bar->getColor() << " "
			<< bar->getLeftup().getX() << " "
			<< bar->getLeftup().getY() << " "
			<< bar->getRightdown().getX() << " "
			<< bar->getRightdown().getY() << std::endl;
	}
}*/
void readfile(const char a[], int number)
{
	if (a == "bar")
	{
		string bb = "BAR\\BAR" + to_string(number) + ".txt";
		ifstream read(bb);
		int x1, x2, y1, y2, color;
		read >> x1 >> y1 >> x2 >> y2 >> color;
		
		//Coordinate leftUp;
		//Coordinate rightDown;
		//Color color;
		//read >> leftUp.setX 
		//	>> leftUp.setY 
		//	>> rightDown.setX 
		//	>> rightDown.setY 
		//	>> color.setColor;
		read.close();
		switch (color)
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
		bar(x1, y1, x2, y2);
	}
	else if (a == "circle")
	{
		string cc = "CIRCLE\\CIRCLE" + to_string(number) + ".txt";
		ifstream read(cc);
		int radius;
		int x, y;
		int color;
		read >> x
			>> y
			>> radius
			>> color;
		read.close();
		circle(x, y, radius);
	}
	else if (a == "delta")
	{
		string dd = "DELTA\\DELTA" + to_string(number) + ".txt";
		ifstream read(dd);
		int deltaPoints[6];
		int color;
		read >> deltaPoints[0]
			>> deltaPoints[1]
			>> deltaPoints[2]
			>> deltaPoints[3]
			>> deltaPoints[4]
			>> deltaPoints[5]
			>> color;
		read.close();
		switch (color)
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
		fillpoly(3, deltaPoints);
	}
	
}

