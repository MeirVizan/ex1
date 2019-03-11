#pragma once
#include <string>
#include <algorithm>
#include <sstream>
#include <memory>
#include <vector>
#include <iostream>

class Shape
{
public:
	Shape();
	virtual double getArea()const =0;
	virtual double getPerimeter()const = 0;
	virtual void draw()const = 0;
	virtual void printDimensions()const = 0;
	virtual~Shape();
};

