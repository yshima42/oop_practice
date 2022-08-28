#include "shape.h"
#include <stdio.h>

void DrawSquare(T_Square *s) {
	printf("Drawing Square\n");
	printf("Side: %d\n", s->itsSide);
	printf("TopLeft Point: x: %d y: %d\n", s->itsTopLeft.x, s->itsTopLeft.y);
}

void DrawCircle(T_Circle *c) {
	printf("Drawing Circle\n");
	printf("Radius: %d\n", c->itsRadius);
	printf("Center Point: x: %d y: %d\n", c->itsCenter.x, c->itsCenter.y);
}

void DrawShape(T_Shape *list) {
	switch (list->itsType) {
		case square:
			DrawSquare((T_Square *)list);
			break;

		case circle:
			DrawCircle((T_Circle *)list);
			break;
	}
}

