#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main()
{
	Rectangle rect;
	Triangle tri;

	rect.setSideA(20);
	rect.setSideB(10);
	
	tri.setSideA(8);
	tri.setSideB(10);

	cout << "The Area of the rectangle is --> " << rect.CalcArea() << endl;
	cout << "The Area of the triangle is --> " << tri.CalcArea() << endl;
}