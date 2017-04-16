#include "Bar.h"
#include "Circle.h"
#include "Coordinate.h"
#include "GraphicsControl.h"
#include <iostream>
#include "Color.h"


int main()
{
	Graphics newgraph;//新建一个画布
	Coordinate a1 = Coordinate(200, 500);
	Coordinate a2 = Coordinate(500, 700);
	Circle *p1 = new Circle(10,a1);
	p1->draw();
	Color *c1 = new Color("RED");
	Bar *p2 = new Bar(a1, a2, c1->getColor());
	p2->draw();
	xyprintf(10, 10, "按任意键释放内存");
	getch();
	delete p1;
	delete p2;
	getch();//暂停
	//newgraph.closegraph();
	return 0;
}