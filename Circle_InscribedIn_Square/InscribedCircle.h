#pragma once
#include <iostream>
#include "Circle.h"
#include "Square.h"

using namespace std;
class InscribedCircle : public Circle, public Square
{
public:
	InscribedCircle() = default;
	InscribedCircle(double d, double l);
	void checkFit();
	void print() const;
	void input();
};

