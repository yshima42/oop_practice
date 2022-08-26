#include "Frame.hpp"

int Frame::getScore() const {
	return itsScore_;
}

void Frame::add(int const pins) {
	itsScore_ += pins;
}

