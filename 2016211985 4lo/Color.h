#pragma once
/*颜色类*/

class Color
{
public:
	Color();
	Color(int color);//初始化颜色
	void setColor(int color);//对颜色进行设置
	int getColor();//获得颜色
	
private:
	bool isColored;
	int color_;//1->填涂   0->不填图
	/*string* blue = new string("BLUE");
	string* red = new string("RED");
	string* green = new string("GREEN");
	string* yellow = new string("YELLOW");
	string* black = new string("BLACK");*/
};

