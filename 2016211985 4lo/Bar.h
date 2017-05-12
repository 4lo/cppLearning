#pragma once
/*������*/
#include "Color.h"
#include "handletrans.h"
#include "Shape.h"
#include <fstream>
static int trueBarNumber = 0;
class Bar : public Shape
{
public:
	Bar(const Bar& a);
	Bar(Coordinate leftup, Coordinate rightdown, Color color);//���ι��캯��
	~Bar();
	static int barNumber;//����ȫ�ּ�¼���ε�����
	int getBarNumber();//����get����
	void draw();
	void save();
	Coordinate getLeftup();
	Coordinate getRightdown();
private:
	Coordinate leftup;//���Ͻ�����
	Coordinate rightdown;//���½�����
	Color barColor;//������ɫ
};

