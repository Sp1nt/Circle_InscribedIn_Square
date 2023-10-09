#include "InscribedCircle.h"

InscribedCircle::InscribedCircle(double r, double sl) : Circle(r), Square(sl) {}

void InscribedCircle::checkFit()
{
	if (Circle::GetCircle() <= Square::GetSideLength()) {
		cout << "A circle fits into a square." << endl;
	}
	else {
		cout << "The circle does not fit into the square." << endl;
	}
}

void InscribedCircle::print() const
{
	Circle::PrintCircle();
	Square::PrintSquare();
}

void InscribedCircle::input()
{
	Circle::InputCircle();
	Square::InputSquare();
}
