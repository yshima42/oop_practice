#ifndef FRAME_HPP
# define FRAME_HPP

class Frame
{
    public:
        Frame() = default;
        virtual ~Frame() = default;

		int getScore() const;
		void add(int const pins);

    private:
		int itsScore_ = 0;
};

#endif
