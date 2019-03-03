#include "Triangle.h"



Triangle::Triangle(double width, double height)
	:m_height(height),m_width(width),Shape("Triangle")
{
}

double Triangle::getArea() const
{
	return (m_height*m_width)/2;
}

double Triangle::getPerimeter() const
{
	return 0;
}

void Triangle::draw() const
{
}


Triangle::~Triangle()
{
}
