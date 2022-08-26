#ifndef SCORER_HPP
# define SCORER_HPP

class Scorer
{
    public:
        Scorer();
        virtual ~Scorer();

		void addThrow(int pins);
		int scoreForFrame(int theFrame);
		bool strike();
		int nextTwoBallForStrike();
		int nextBallForSpare();
		int twoBallsInFrame();
		bool spare();

    private:
		int itsThrows_[21] = {0};
		int itsCurrentThrow_ = 0;
		int ball_;
};

#endif
