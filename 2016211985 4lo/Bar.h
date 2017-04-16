#pragma once
/*������*/
#include "Coordinate.h"
#include "Color.h"
#include <string>
#include <graphics.h>
#include "handletrans.h"
#include "Shape.h"
class Bar : public Shape
{
public:
	Bar(const Bar& a);
	Bar(Coordinate leftup, Coordinate rightdown, Color color);//���ι��캯��
	~Bar();
	static int barNumber;//����ȫ�ּ�¼���ε�����
	int getBarNumber();//����get����
	void draw();
private:
	Coordinate leftup;//���Ͻ�����
	Coordinate rightdown;//���½�����
	Color barColor;//������ɫ
};

