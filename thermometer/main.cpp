#include "IOCHeater.hpp"
#include "IOCThermometer.hpp"
#include "Regulate.hpp"

int main() {
	Regulate r;
	IOCThermometer t;
	IOCHeater h;

	r.run(t, h, 20, 25);
}
