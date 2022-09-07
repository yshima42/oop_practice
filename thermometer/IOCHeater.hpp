#ifndef IOCHEATER_HPP
# define IOCHEATER_HPP

#include "Heater.hpp"
#include <iostream>

class IOCHeater : public Heater
{
    public:
        IOCHeater() = default;
        virtual ~IOCHeater() = default;

		void Engage();
		void Disengage();

    private:
};

#endif
