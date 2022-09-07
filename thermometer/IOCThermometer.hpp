#ifndef IOCTHERMOMETER_HPP
# define IOCTHERMOMETER_HPP

#include <iostream>
#include "Thermometer.hpp"

class IOCThermometer : public Thermometer
{
    public:
        IOCThermometer() = default;
        virtual ~IOCThermometer() = default;

		int Read();

    private:
};

#endif
