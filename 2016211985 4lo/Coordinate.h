#pragma once
/*������*/
#include <string>
class Coordinate
{
public:
	Coordinate();
	Coordinate(int x, int y);
	int getX();//��ȡX����
	int getY();//��ȡY����
	void setX(int x);//����X����
	void setY(int y);//����Y����
	std::string getXYs();//�Ժ���Ҫ�ٽ���
	void changeCoordinate(int x, int y);//������һ���޸�
private:
	int x;
	int y;
};

