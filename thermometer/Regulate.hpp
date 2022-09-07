#ifndef REGULATE_HPP
# define REGULATE_HPP
#include "Thermometer.hpp"
#include "Heater.hpp"
#include <iostream>
#include <unistd.h>

class Regulate
{
    public:
        Regulate() = default;
        virtual ~Regulate() = default;

		void run(Thermometer & t, Heater & h, int minTemp, int maxTemp);

    private:
};


#endif
