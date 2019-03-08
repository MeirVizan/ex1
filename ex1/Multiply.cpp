#include "Multiply.h"



Multiply::Multiply(std::shared_ptr<Shape> s1 , std::shared_ptr<Shape> s2)
	:m_s1(s1),m_s2(s2),
	Shape(std::string("Multiple (").append(s1->getName()).append(" - ").append(s2->getName()).append(")"))
{
}

double Multiply::getArea() const
{
	return ;
}

double Multiply::getPerimeter() const
{
	return 0;
}

void Multiply::draw() const
{
}


Multiply::~Multiply()
{
}
