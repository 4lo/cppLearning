#pragma once
/*坐标类*/
#include <string>
class Coordinate
{
public:
	Coordinate();
	Coordinate(int x, int y);
	bool operator == (const Coordinate& another);
	bool operator != (const Coordinate& another);
	void operator =  (const Coordinate& another);
	Coordinate operator + (const Coordinate& another);
	int getX() const;//获取X坐标
	int getY() const;//获取Y坐标
	void setX(int x);//设置X坐标
	void setY(int y);//设置Y坐标
	std::string getXYs();//以后需要再进行
	void changeCoordinate(int x, int y);//将坐标一起修改
private:
	int x;
	int y;
};

