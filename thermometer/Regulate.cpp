#include "Regulate.hpp"

void Regulate::run(Thermometer & t, Heater & h, int minTemp, int maxTemp) {
	for (;;) {
		while (t.Read() > minTemp) {
			std::cout << "GOOOOD!" << std::endl;
			//sleep(1);
		}
		h.Engage();
		while (t.Read() < maxTemp) {
			std::cout << "GOOOOD!" << std::endl;
			//sleep(1);
		}
		h.Disengage();
	};
}

