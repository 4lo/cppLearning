#pragma once
/*��ɫ��*/
#include<string>
using std::string;
class Color
{
public:
	Color();
	Color(string color);//��ʼ����ɫ
	void setColor(string color);//����ɫ��������
	std::string getColor();//�����ɫ
	
private:
	bool isColored;
	std::string color;
};

