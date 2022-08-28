#ifndef SQUARE_HPP
# define SQUARE_HPP

#include "Shape.hpp"

class Square : public Shape
{
    public:
        Square() = default;
        virtual ~Square() = default;

		virtual void Draw() const;

		int itsSide;
		int x;
		int y;
};

#endif
