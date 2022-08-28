#include "shape.h"

int main() {
	T_Circle c;
	T_Point c_p;
	T_Square s;
	T_Point s_p;

	c_p.x = 1;
	c_p.y = 2;

	s_p.x = 3;
	s_p.y = 4;

	c.itsType = circle;
	c.itsCenter = c_p;
	c.itsRadius = 5;

	s.itsType = square;
	s.itsTopLeft = s_p;
	s.itsSide = 6;

	T_Shape * list;
	list = (T_Shape *)&c;
	DrawShape(list);
	list++;
	list = (T_Shape *)&s;
	DrawShape(list);
}
