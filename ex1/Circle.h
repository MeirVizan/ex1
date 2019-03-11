#pragma once
#include "Shape.h"
class Circle :public Shape
{
public:
	Circle(double radius);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	void printDimensions() const;
	~Circle();
private:
	double m_raduis;
};

