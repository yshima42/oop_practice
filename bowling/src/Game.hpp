#ifndef GAME_HPP
# define GAME_HPP

#include "Scorer.hpp"
#include <algorithm>

class Game
{
    public:
        Game() = default;
        virtual ~Game() = default;

		int score();
		void add(int pins);
		int scoreForFrame(int theFrame);

    private:
		int itsCurrentFrame_ = 1;
		bool firstThrowInFrame_ = true;
		Scorer itsScorer_;

		int getCurrentFrame();
		void advanceFrame();
		void adjustCurrentFrame(int pins);
		bool lastBallInFrame(int pins);
		bool strike(int pins);
		bool adjustFrameForStrike(int pins);
};

#endif
