#pragma once
/*��ɫ��*/
#include<string>
#include<graphics.h>
using std::string;
class Color
{
public:
	Color();
	Color(int color);//��ʼ����ɫ
	void setColor(int color);//����ɫ��������
	int getColor();//�����ɫ
	
private:
	bool isColored;
	int *co;
	int color;
};

