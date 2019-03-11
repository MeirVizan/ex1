#pragma once
#include "Shape.h"
class Multiply :public Shape
{
public:
	Multiply(std::shared_ptr<Shape> s1, int times);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	virtual void printDimensions()const;
	~Multiply();
private:
	std::shared_ptr<Shape> m_s1;
	int m_times;
};

