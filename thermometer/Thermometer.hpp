#ifndef THERMOMETER_HPP
# define THERMOMETER_HPP

class Thermometer
{
    public:
        Thermometer() = default;
        virtual ~Thermometer() = default;

		virtual int Read() = 0;
    private:
};

#endif
