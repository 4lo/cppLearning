#pragma once
/*������*/
#include "Coordinate.h"
#include "Color.h"
#include <string>
#include <graphics.h>
#include "handletrans.h"
class Bar
{
public:
	Bar(Coordinate leftup, Coordinate rightdown, Color color);//���ι��캯��
	~Bar();
	static int barNumber;//����ȫ�ּ�¼���ε�����
	int getBarNumber();//����get����
private:
	Coordinate leftup;//���Ͻ�����
	Coordinate rightdown;//���½�����
	Color barColor;//������ɫ
};

void drawBar();

