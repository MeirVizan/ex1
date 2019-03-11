#include "Add.h"


Add::Add(std::shared_ptr<Shape> s1, std::shared_ptr<Shape> s2)
	:m_s1(s1),m_s2(s2)
{
}

double Add::getArea() const
{
	return m_s1->getArea()+m_s2->getArea();
}

double Add::getPerimeter() const
{
	return m_s1->getPerimeter()+m_s2->getPerimeter();
}

void Add::draw() const
{
}

void Add::printDimensions() const
{
	std::cout << "(";
	m_s1->printDimensions();
	std::cout << "+";
	m_s2->printDimensions();
	std::cout << ")" << std::endl;
}


Add::~Add()
{
}
