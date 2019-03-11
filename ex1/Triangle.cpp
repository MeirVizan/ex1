#include "Triangle.h"



Triangle::Triangle(double width , double height)
	:m_height(height),m_width(width)
{
}

double Triangle::getArea() const
{
	return (m_height*m_width)/2;
}

double Triangle::getPerimeter() const
{
	return 2*(std::sqrt((m_height*m_height)+(m_width*m_width)))+m_width;
}

void Triangle::draw() const
{
	std::cout << "\n" << R"(*
						   * *
						  *   *
						 *     *
						*       *
					   ***********)";
}

void Triangle::printDimensions() const
{
	std::cout << "Triangle" << "(" << " h : " << m_height << " w : " << m_width << ")";
}


Triangle::~Triangle()
{
}
