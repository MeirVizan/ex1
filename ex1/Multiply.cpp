#include "Multiply.h"


/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

Multiply::Multiply(std::shared_ptr<Shape> s1 , int times)
	:m_s1(s1),m_times(times)
{
}
/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

double Multiply::getArea() const
{
	return m_s1->getArea()*m_times;
}
/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

double Multiply::getPerimeter() const
{
	return m_s1->getPerimeter()*m_times;
}
/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

void Multiply::draw() const
{
	m_s1->printDimensions();
	std::cout<<" * ("<<m_times<<") times " << std::endl;
	m_s1->draw();

}
/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

void Multiply::printDimensions() const
{
	m_s1->printDimensions();
	std::cout << " * (" << m_times << ")  times" << std::endl;
}
/////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////

Multiply::~Multiply()
{
}
