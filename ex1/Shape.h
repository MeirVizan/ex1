#pragma once
#include <string>

class Shape
{
public:
	Shape(std::string name);
	virtual double getArea()const =0;
	virtual double getPerimeter()const = 0;
	virtual void draw()const = 0;
	const std::string & getName()const { return m_name; };

	~Shape();
private:
	std::string m_name;
};

