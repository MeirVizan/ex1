#pragma once
#include "Shape.h"
class Multiply :public Shape
{
public:
	Multiply();
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	~Multiply();
private:
	std::shared_ptr<Shape> m_s1;
	std::shared_ptr<Shape> m_s2;
};

