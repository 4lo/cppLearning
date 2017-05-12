#pragma once
/*颜色类*/
#include<string>
#include<graphics.h>
using std::string;
class Color
{
public:
	Color();
	Color(ege::color_t color);//初始化颜色
	void setColor(ege::color_t color);//对颜色进行设置
	ege::color_t getColor();//获得颜色
	
private:
	bool isColored;
	ege::color_t color;
};

