#include "shape.h"

struct Circle {
	enum ShapeType itsType;
	double itsRadius;
	Point itsCenter;
};

void DrawCircle(struct Circle*);
