#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
public:
	Rectangle(double m_height,double m_width);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	~Rectangle();
private:
	double m_height;
	double m_width;

};

