#pragma once
/*Բ�ࣨ���ģ�*/
#include "Coordinate.h"
#include "Color.h"
class Circle
{
public:
	Circle(int radius, Coordinate Circle);//Բ�ι��캯��
	~Circle();
	static int circleNumber;//Բ�μ���
	int getCircleNumber();//���Բ�θ���
private:
	int Radius;//�뾶
	Coordinate CircleXY;//Բ������
	Color CircleColor;//��ɫ��������
};

