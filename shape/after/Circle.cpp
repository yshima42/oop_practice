#include "Circle.hpp"

void Circle::Draw() const {
	std::cout << "Drawing Circle" << std::endl;
	std::cout << "Radius: " << itsRadius << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;
}
