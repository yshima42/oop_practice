#ifndef GAME_HPP
# define GAME_HPP

#include "Scorer.hpp"
#include <algorithm>

class Game
{
    public:
        Game();
        virtual ~Game();

		int score();
		int getCurrentFrame();
		void add(int pins);
		void adjustCurrentFrame(int pins);
		bool lastBallInFrame(int pins);
		bool strike(int pins);
		bool adjustFrameForStrike(int pins);
		void advanceFrame();
		int scoreForFrame(int theFrame);

    private:
		int itsCurrentFrame_ = 1;
		bool firstThrowInFrame_ = true;
		Scorer *itsScorer_ = new Scorer();
};

#endif
