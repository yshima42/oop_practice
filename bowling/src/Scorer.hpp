#ifndef SCORER_HPP
# define SCORER_HPP

#include <iostream>

class Scorer
{
    public:
        Scorer() = default;
        virtual ~Scorer() = default;

		void addThrow(int pins);
		int scoreForFrame(int theFrame);

	private:
		bool strike();
		int nextTwoBallForStrike();
		int nextBallForSpare();
		int twoBallsInFrame();
		bool spare();

		int itsThrows_[21] = {0};
		int itsCurrentThrow_ = 0;
		int ball_;
};

#endif
