enum ShapeType {circle, square};

typedef struct S_Shape {
	enum ShapeType itsType;
} T_Shape;

typedef struct S_Point {
	int x;
	int y;
} T_Point;

typedef struct S_Circle {
	enum ShapeType itsType;
	int itsRadius;
	T_Point itsCenter;
} T_Circle;

typedef struct S_Square {
	enum ShapeType itsType;
	int itsSide;
	T_Point itsTopLeft;
} T_Square;

void DrawSquare(T_Square *s);
void DrawCircle(T_Circle *c);
void DrawShape(T_Shape *list);
