#include "Circle.h"



Circle::Circle(double raduis)
	:m_raduis(raduis),Shape("Circle")
{
}

double Circle::getArea() const
{
	return 3.145 *(m_raduis*m_raduis);
}

double Circle::getPerimeter() const
{
	return 2*3.145*(m_raduis);
}

void Circle::draw() const
{
}


Circle::~Circle()
{
}
