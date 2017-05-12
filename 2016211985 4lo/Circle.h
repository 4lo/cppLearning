#pragma once
/*Բ�ࣨ���ģ�*/
#include "Color.h"
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(const Circle& a);//�������캯��
	Circle(int radius, Coordinate Circle);//Բ�ι��캯��
	~Circle();
	static int circleNumber;//Բ�μ���
	int getCircleNumber();//���Բ�θ���
	void draw();
	void save();
	int getRadius();
private:
	int Radius;//�뾶
	Coordinate CircleXY;//Բ������
	Color CircleColor;//��ɫ��������
};

