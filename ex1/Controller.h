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
	void mull();
	void sub();
	void area(int index);
	int max();
	int min();
	void draw(int n);
	void same(int n);
	~Controller();
private:
	std::vector<std::shared_ptr<Shape>> m_v;
};

