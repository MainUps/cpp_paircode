#pragma once
#include"Shape.h"
class Line : public Shape {
public:
	Line(int index) : Shape(index) {};
	void draw();
};