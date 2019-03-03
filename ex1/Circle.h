#pragma once
#include "Shape.h"
class Circle :public Shape
{
public:
	Circle(double raduis);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	~Circle();
private:
	double m_raduis;
};

