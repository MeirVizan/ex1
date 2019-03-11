#include "Rectangle.h"

Rectangle::Rectangle(double height, double width)
	:m_height(height),m_width(width)
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
	std::cout << "\n" << R"(
			**********
			*		 *
			*		 *
			*        *
			*        *
			**********)";
}

void Rectangle::printDimensions() const
{
	std::cout <<"Rectangle"<< "("<<" h :" << m_height << " w : " << m_width << ")";
}


Rectangle::~Rectangle()
{
}
