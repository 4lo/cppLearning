#pragma once
/*圆类（空心）*/
#include "Color.h"
#include "Shape.h"
#include "Circle.h"
#include <fstream>
using namespace std;
class Circle : public Shape
{
public:
	Circle(const Circle& a);//拷贝构造函数
	Circle(int radius, Coordinate Circle);//圆形构造函数
	~Circle();
	static int circleNumber;//圆形计数
	int getCircleNumber();//获得圆形个数
	void draw();
	void save();
	int getRadius();
	Coordinate getCenter();
private:
	int Radius;//半径
	Coordinate CircleXY;//圆心坐标
	Color CircleColor;//颜色（待定）
};

