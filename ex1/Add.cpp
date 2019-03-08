#include "Add.h"


Add::Add(std::shared_ptr<Shape> s1, std::shared_ptr<Shape> s2)
	:m_s1(s1),m_s2(s2),
	Shape(std::string("Add (").append(s1->getName()).append(" - ").append(s2->getName()).append(")"))
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


Add::~Add()
{
}
