#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	//Added p1 and p2 to make the operator << work and to print the two points
	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	p2 = p2;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}
