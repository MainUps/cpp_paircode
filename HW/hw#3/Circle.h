#pragma once
#include"Shape.h"
class Circle : public Shape {
public:
	Circle(int index) : Shape(index) {};
	void draw();
};