#include "delta.h"
using namespace std;
int Delta::deltaNumber = 0;
Delta::Delta(Coordinate a, Coordinate b, Coordinate c, Color color)
{
	this->a = a;
	this->b = b;
	this->c = c;
	setColor(color);
	deltaNumber++;
}

Delta::Delta()
{
	Coordinate a, b, c;
	this->a = a;
	this->b = b;
	this->c = c;
	setColor(1);
	deltaNumber++;
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
	string temp = "DELTA\\DELTA" + to_string(deltaNumber) + ".txt";
	ofstream save(temp);
	save << a.getX() << " "
		<< a.getY() << " "
		<< b.getX() << " "
		<< b.getY() << " "
		<< c.getX() << " "
		<< c.getY() << " "
		<< getColor() << endl;
	save.close();
}
