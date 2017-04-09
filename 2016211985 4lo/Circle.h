#pragma once
/*圆类（空心）*/
#include "Coordinate.h"
#include "Color.h"
class Circle
{
public:
	Circle(int radius, Coordinate Circle);//圆形构造函数
	~Circle();
	static int circleNumber;//圆形计数
	int getCircleNumber();//获得圆形个数
private:
	int Radius;//半径
	Coordinate CircleXY;//圆心坐标
	Color CircleColor;//颜色（待定）
};

