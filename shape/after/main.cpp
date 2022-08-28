#include "Circle.hpp"
#include "Square.hpp"
#include <vector>

void DrawAllShapes(std::vector<Shape *>& list) {
	std::vector<Shape *>::iterator i;
	for (i = list.begin(); i != list.end(); i++)
		(*i)->Draw();
}

int main() {
	Square s;
	s.itsSide = 1;
	s.x = 2;
	s.y = 3;

	Circle c;
	c.itsRadius = 4;
	c.x = 5;
	c.y = 6;

	std::vector<Shape *> list;
	list.push_back(&s);
	list.push_back(&c);

	DrawAllShapes(list);
}
