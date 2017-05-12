#include "documents.h"
using std::string;
void save(Shape* shape)
{
	Bar *bar;
	Circle *cirlce;
	Delta *delta;
	if ((bar = dynamic_cast<Bar*>(shape)) != 0)
	{
		string temp = "BAR\\BAR" +  std::to_string(--bar->barNumber) + ".txt";
		ofstream a(temp);
		a << bar->getColor() << " "
			<< bar->getLeftup().getX() << " "
			<< bar->getLeftup().getY() << " "
			<< bar->getRightdown().getX() << " "
			<< bar->getRightdown().getY() << std::endl;
	}
}