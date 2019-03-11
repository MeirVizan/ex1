#pragma once
#include "Shape.h"

class Add :public Shape
{
public:
	Add(std::shared_ptr<Shape> s1,std::shared_ptr<Shape> s2);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	virtual void printDimensions()const;
	~Add();
private:
	std::shared_ptr<Shape> m_s1;
	std::shared_ptr<Shape> m_s2;
};

