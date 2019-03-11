#include "Circle.h"




Circle::Circle(double raduis )
	:m_raduis(raduis)
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
	std::cout << "\n" << R"( 
		            ****
				  **    **
				 **      **
				 *        *
				 *        *
				 *        *        
				 *        *
				 **      **
				  **    ** 
					****)";

}

void Circle::printDimensions() const
{
	std::cout << "Circle" << "( " <<"r : " << m_raduis << ")";
}


Circle::~Circle()
{
}
