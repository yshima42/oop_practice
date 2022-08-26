#include "Game.hpp"

int Game::score() {
	return scoreForFrame(itsCurrentFrame_);
}

int Game::getCurrentFrame() {
	return itsCurrentFrame_;
}

void Game::add(int pins) {
	itsScorer_.addThrow(pins);
	adjustCurrentFrame(pins);
}

void Game::adjustCurrentFrame(int pins) {
	if (lastBallInFrame(pins)) {
		advanceFrame();
	} else {
		firstThrowInFrame_ = false;
	}
}

bool Game::lastBallInFrame(int pins) {
	return (strike(pins) || !firstThrowInFrame_);
}

bool Game::strike(int pins) {
	return (firstThrowInFrame_ == true && pins == 10);
}

bool Game::adjustFrameForStrike(int pins) {
	if (pins == 10) {
		advanceFrame();
		return true;
	}
	return false;
}

void Game::advanceFrame() {
	itsCurrentFrame_ = std::min(10, itsCurrentFrame_ + 1);
}

int Game::scoreForFrame(int theFrame) {
	return itsScorer_.scoreForFrame(theFrame);
}

