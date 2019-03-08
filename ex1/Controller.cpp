#include "Controller.h"
#include "Add.h"
#include "Multiply.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <string>
#include "Sub.h"
#include "Triangle.h"
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

Controller::Controller()
{
}

void Controller::commend()
{
	std::vector<std::shared_ptr<Shape>> v;
	v.push_back(std::make_shared<Circle>());
	v.push_back(std::make_shared<Rectangle>());
	v.push_back(std::make_shared<Triangle>());
	std::string command;
	do
	{
		int i = 0;
		std::cout << "list of shapes:\n";
		for (auto &e : v)
		{
			std::cout << i++ << ": " << e->getName() << " Area = " << e->getArea() << "\n";
		}
				std::cout << "\n" << R"(Please enter one of the following commands:
		R - To create a new Rectangle
		C - To create a new circle
		M - To add multiple shapes
		D - To delete a shape from the list
		exit - To exit
		)";
				std::cin >> command;
				std::transform(command.begin(), command.end(), command.begin(), ::toupper);
				if (command == "cre r")
				{
					double h, w;
					cout << "Enter height then width\n";
					cin >> h >> w;
					v.push_back(std::make_shared<Rectangle>(h, w));
				}
				if (command == "cre c")
				{
					double r;
					cout << "Enter raduis\n";
					cin >> r;
					v.push_back(std::make_shared<Circle>(r));
				}
				if (command == "cre t")
				{
					int l, h;
					cout << "Enter indexes of two shapes\n";
					cin >> l >> h;
					v.push_back(std::make_shared<Triangle>(l,h));
				}
				if (command == "mul")
				{
					int arg1, arg2;
					cout << "Enter indexes of two shapes\n";
					cin >> arg1 >> arg2;
					v.push_back(std::make_shared<Multiply>(v[arg1], v[arg2]));
				}
				if (command == "add")
				{
					int arg1, arg2;
					cout << "Enter indexes of two shapes\n";
					cin >> arg1 >> arg2;
					v.push_back(std::make_shared<Add>(v[arg1], v[arg2]));
				}
				if (command == "sub")
				{
					int arg1, arg2;
					cout << "Enter indexes of two shapes\n";
					cin >> arg1 >> arg2;
					v.push_back(std::make_shared<Sub>(v[arg1], v[arg2]));
				}
				if (command == "del")
				{
					int index;
					cout << "Enter the number of the shape from the list:\n";
					cin >> index;
					v.erase(v.begin() + index);
				}
	} while (command != "exit");


}


Controller::~Controller()
{
}
