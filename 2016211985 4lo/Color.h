#pragma once
/*��ɫ��*/

class Color
{
public:
	Color();
	Color(int color);//��ʼ����ɫ
	void setColor(int color);//����ɫ��������
	int getColor();//�����ɫ
	
private:
	bool isColored;
	int color_;//1->��Ϳ   0->����ͼ
	/*string* blue = new string("BLUE");
	string* red = new string("RED");
	string* green = new string("GREEN");
	string* yellow = new string("YELLOW");
	string* black = new string("BLACK");*/
};

