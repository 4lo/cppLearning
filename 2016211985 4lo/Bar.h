#pragma once
/*矩形类*/
#include "Color.h"
#include "handletrans.h"
#include "Shape.h"
#include <fstream>
static int trueBarNumber = 0;
class Bar : public Shape
{
public:
	Bar(const Bar& a);
	Bar(Coordinate leftup, Coordinate rightdown, Color color);//矩形构造函数
	~Bar();
	static int barNumber;//用于全局记录矩形的数量
	int getBarNumber();//数量get函数
	void draw();
	void save();
	Coordinate getLeftup();
	Coordinate getRightdown();
private:
	Coordinate leftup;//左上角坐标
	Coordinate rightdown;//右下角坐标
	Color barColor;//矩形颜色
};

