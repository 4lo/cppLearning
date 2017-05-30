#pragma once
/*������*/
#include <string>
class Coordinate
{
public:
	Coordinate();
	Coordinate(int x, int y);
	bool operator == (const Coordinate& another);
	bool operator != (const Coordinate& another);
	void operator =  (const Coordinate& another);
	Coordinate operator + (const Coordinate& another);
	int getX() const;//��ȡX����
	int getY() const;//��ȡY����
	void setX(int x);//����X����
	void setY(int y);//����Y����
	std::string getXYs();//�Ժ���Ҫ�ٽ���
	void changeCoordinate(int x, int y);//������һ���޸�
private:
	int x;
	int y;
};

