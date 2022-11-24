#include "rectangle.h";

rectangle::rectangle(double a, double b) {
	this->height = a;
	this->lenght = b;
}

	double rectangle::perimeter() {
		return height * 2 + lenght * 2;
	}
	double rectangle::area() {
		return height * lenght;
	}


