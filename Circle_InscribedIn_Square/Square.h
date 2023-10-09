#pragma once
#include <iostream>

using namespace std;

class Square
{
protected:
	double sideLength;

public:
    Square() = default;
    Square(double sl);

    void InputSquare();
    void PrintSquare() const;

    double GetSideLength() const;
    void SetSideLength(double sl);
};