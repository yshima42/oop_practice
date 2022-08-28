#ifndef SHAPE_HPP
# define SHAPE_HPP
#include <iostream>

class Shape
{
    public:
        Shape() = default;
        virtual ~Shape() = default;

    	virtual void Draw() const = 0;

    private:
	
};

#endif
