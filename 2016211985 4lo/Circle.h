#pragma once
/*Բ�ࣨ���ģ�*/
#include "Color.h"
#include "Shape.h"
#include "Circle.h"
#include <fstream>
using namespace std;
class Circle : public Shape
{
public:
	Circle(const Circle& a);//�������캯��
	Circle(int radius, Coordinate Circle);//Բ�ι��캯��
	Circle();
	~Circle();
	static int circleNumber;//Բ�μ���
	int getCircleNumber();//���Բ�θ���
	void draw();
	void save();
	int getRadius();
	Coordinate getCenter();
private:
	int Radius;//�뾶
	Coordinate CircleXY;//Բ������
	Color CircleColor;//��ɫ��������
};

