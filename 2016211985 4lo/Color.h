#pragma once
/*��ɫ��*/
#include<string>
#include<graphics.h>
using std::string;
class Color
{
public:
	Color();
	Color(ege::color_t color);//��ʼ����ɫ
	void setColor(ege::color_t color);//����ɫ��������
	ege::color_t getColor();//�����ɫ
	
private:
	bool isColored;
	ege::color_t color;
};

