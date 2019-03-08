#include "Rectangle.h"

Rectangle::Rectangle(double height=0, double width=0)
	:m_height(height),m_width(width),Shape("Rectangle")
{
}

double Rectangle::getArea() const
{
	return m_height*m_width;
}

double Rectangle::getPerimeter() const
{
	return 2*(m_height+m_width);
}

void Rectangle::draw() const
{
}


Rectangle::~Rectangle()
{
}
