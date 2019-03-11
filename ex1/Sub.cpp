#include "Sub.h"



Sub::Sub(std::shared_ptr<Shape> s1, std::shared_ptr<Shape> s2)
	:m_s1(s1), m_s2(s2)
{
}

double Sub::getArea() const
{
	return m_s1->getArea()-m_s2->getArea();
}

double Sub::getPerimeter() const
{
	return m_s1->getPerimeter()-m_s2->getPerimeter();
}

void Sub::draw() const
{
}

void Sub::printDimensions() const
{
	std::cout << "(";
	m_s1->printDimensions();
	std::cout << "-";
	m_s2->printDimensions();
	std::cout << ")" << std::endl;
}


Sub::~Sub()
{
}
