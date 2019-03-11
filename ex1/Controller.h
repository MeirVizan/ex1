#pragma once
#include "Shape.h"
#include "Add.h"
#include "Multiply.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <string>
#include "Sub.h"
#include "Triangle.h"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <memory>

class Controller
{
public:
	Controller();
	void commend();
	void help();
	void create(std::string & command);
	void add();
	void mull(int n);
	void sub();
	void area(int index);
	int max();
	int min();
	~Controller();
private:
	std::vector<std::shared_ptr<Shape>> m_v;
};

