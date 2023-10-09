#include "Square.h"

Square::Square(double sl)
{
	sideLength = sl;
}

void Square::InputSquare()
{
	cout << "Input a side length: ";
	cin >> sideLength;
}

void Square::PrintSquare() const
{
	cout << "Side length: " << sideLength << endl;
}

double Square::GetSideLength() const
{
	return sideLength;
}

void Square::SetSideLength(double sl)
{
	sideLength = sl;
}


