#pragma once
#include "Shape.h"
class Triangle :public Shape
{
public:
	Triangle(double m_width ,double m_height);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	virtual void printDimensions()const;
	~Triangle();
private:
	double m_width;
	double m_height;
};

