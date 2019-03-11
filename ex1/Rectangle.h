#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
public:
	Rectangle(double ,double );
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	virtual void printDimensions()const;
	~Rectangle();
private:
	double m_height;
	double m_width;

};

