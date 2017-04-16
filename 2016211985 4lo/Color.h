#pragma once
/*颜色类*/
#include<string>
using std::string;
class Color
{
public:
	Color();
	Color(string color);//初始化颜色
	void setColor(string color);//对颜色进行设置
	std::string getColor();//获得颜色
	
private:
	bool isColored;
	std::string color;
};

