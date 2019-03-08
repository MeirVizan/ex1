#pragma once
#include "Shape.h"
class Sub :public Shape
{
public:
	Sub(std::shared_ptr<Shape> s1, std::shared_ptr<Shape> s2);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	~Sub();
private:
	std::shared_ptr<Shape> m_s1;
	std::shared_ptr<Shape> m_s2;
};

