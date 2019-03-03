#pragma once
#include "Shape.h"
class Sub :public Shape
{
public:
	Sub();
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual void draw()const;
	~Sub();
private:
	std::shared_ptr<Shape> m_s1;
	std::shared_ptr<Shape> m_s2;
};

