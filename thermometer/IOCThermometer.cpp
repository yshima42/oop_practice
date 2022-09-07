#include "IOCThermometer.hpp"

int IOCThermometer::Read() {
	int temperature = 0;
	std::cout << "temperature: ";
	std::cin >> temperature;
	return temperature;
}
