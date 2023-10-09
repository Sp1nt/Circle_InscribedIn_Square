#include "Circle.h"

Circle::Circle(double r)
{
	radius = r;
}

void Circle::InputCircle()
{
	cout << "Input a circle radius: ";
	cin >> radius;
}

void Circle::PrintCircle() const
{
	cout << "Circle radius: " << radius << endl;
}



double Circle::GetCircle() const
{
	return radius;
}

void Circle::SetCircle(double r)
{
	radius = r;
}

