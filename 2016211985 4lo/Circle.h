#pragma once
/*Բ�ࣨ���ģ�*/
#include "Coordinate.h"
#include "Color.h"
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(const Circle& a);
	Circle(int radius, Coordinate Circle);//Բ�ι��캯��
	~Circle();
	static int circleNumber;//Բ�μ���
	int getCircleNumber();//���Բ�θ���
	void draw();
	int getRadius();
private:
	int Radius;//�뾶
	Coordinate CircleXY;//Բ������
	Color CircleColor;//��ɫ��������
};

