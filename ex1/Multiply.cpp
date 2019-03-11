#include "Multiply.h"



Multiply::Multiply(std::shared_ptr<Shape> s1 , int times)
	:m_s1(s1),m_times(times)
{
}

double Multiply::getArea() const
{
	return 0;
}

double Multiply::getPerimeter() const
{
	return 0;
}

void Multiply::draw() const
{
}

void Multiply::printDimensions() const
{
}


Multiply::~Multiply()
{
}
