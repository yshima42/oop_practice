#ifndef CIRCLE_HPP
# define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape
{
    public:
        Circle() = default;
        virtual ~Circle() = default;

		virtual void Draw() const;

		int itsRadius;
		int x;
		int y;


};

#endif
