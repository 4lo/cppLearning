#include "Bar.h"
#include "Circle.h"
#include "Coordinate.h"
#include "GraphicsControl.h"
#include <iostream>
#include "Color.h"
#include <graphics.h>
#include <fstream>
#include "delta.h"
#include <fstream>
using namespace std;
int main()
{
	system("md DELTA");
	system("md CIRCLE");
	system("md BAR");
	system("md POLY");
	Graphics newgraph;//新建一个画布
	Coordinate a(100, 100);
	Coordinate b(200, 200);
	Color color(3);
	color.getColor();
	setcolor(BLACK);
	xyprintf(10, 10, "%d", color.getColor());
	Bar bbar(a, b, color);
	bbar.draw();
	getch();//暂停
	return 0;
}