#pragma once
#include <iostream>

using namespace std;

class Circle
{
protected:
	double radius;

public:
	Circle() = default;
	Circle(double r);
	void InputCircle();
	void PrintCircle() const;

	double GetCircle() const;
	void SetCircle(double r);
};

