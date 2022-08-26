#include "Scorer.hpp"

void Scorer::addThrow(int pins) {
	itsThrows_[itsCurrentThrow_++] = pins;
}

int Scorer::scoreForFrame(int theFrame) {
	ball_ = 0;
	int score = 0;

	for (int currentFrame = 0; currentFrame < theFrame; currentFrame++) {
		if (strike()) {
			score += 10 + nextTwoBallForStrike();
			ball_++;
		} else if (spare()) {
			score += 10 + nextBallForSpare();
			ball_ += 2;
		} else {
			score += twoBallsInFrame();
			ball_ += 2;
		}
	}
	return score;
}

bool Scorer::strike() {
	return itsThrows_[ball_] == 10;
}

int Scorer::nextTwoBallForStrike() {
	return itsThrows_[ball_ + 1] + itsThrows_[ball_ + 2];
}

int Scorer::nextBallForSpare() {
	return itsThrows_[ball_ + 2];
}

int Scorer::twoBallsInFrame() {
	return itsThrows_[ball_] + itsThrows_[ball_ + 1];
}

bool Scorer::spare() {
	return (itsThrows_[ball_] + itsThrows_[ball_ + 1]) == 10;
}

