#ifndef HEATER_HPP
# define HEATER_HPP

class Heater
{
    public:
        Heater() = default;
        virtual ~Heater() = default;

		virtual void Engage() = 0;
		virtual void Disengage() = 0;

    private:
};

#endif
