#pragma once
/*颜色类*/
#include<string>
#include<graphics.h>
using std::string;
class Color
{
public:
	Color();
	Color(int color);//初始化颜色
	void setColor(int color);//对颜色进行设置
	int getColor();//获得颜色
	
private:
	bool isColored;
	int *co;
	int color;
};

