#include <gtest/gtest.h>
#include "../src/Game.hpp"
#include "../src/Scorer.hpp"
#include "../src/Frame.hpp


TEST(GameTest, TwoThrowsNoMark) {
	Game g;
	g.add(5);
	g.add(4);
	ASSERT_EQ(9, g.score());
}

TEST(GameTest, FourThrowNoMark) {
	Game g;
	g.add(5);
	g.add(4);
	g.add(7);
	g.add(2);
	ASSERT_EQ(18, g.score());
	ASSERT_EQ(9, g.scoreForFrame(1));
	ASSERT_EQ(18, g.scoreForFrame(2));
}

TEST(GameTest, testSimpleSpare) {
	Game g;
	g.add(3);
	g.add(7);
	g.add(3);
	ASSERT_EQ(13, g.scoreForFrame(1));
}

TEST(GameTest, SimpleFrameAfterSpare) {
	Game g;
	g.add(3);
	g.add(7);
	g.add(3);
	g.add(2);
	ASSERT_EQ(13, g.scoreForFrame(1));
	ASSERT_EQ(18, g.scoreForFrame(2));
	ASSERT_EQ(18, g.score());
}

TEST(GameTest, SimpleStrike) {
	Game g;
	g.add(10);
	g.add(3);
	g.add(6);
	ASSERT_EQ(19, g.scoreForFrame(1));
	ASSERT_EQ(28, g.score());
}

TEST(GameTest, ParfectGame) {
	Game g;
	for (int i = 0; i < 12; i++) {
		g.add(10);
	}
	ASSERT_EQ(300, g.score());
}

TEST(GameTest, EndOfArray) {
	Game g;
	for (int i = 0; i < 9; i++) {
		g.add(0);
		g.add(0);
	}
	g.add(2);
	g.add(8);
	g.add(10);
	ASSERT_EQ(20, g.score());
}

TEST(GameTest, SimpleGame) {
	Game g;
	g.add(1);
    g.add(4);
    g.add(4);
    g.add(5);
    g.add(6);
    g.add(4);
    g.add(5);
    g.add(5);
    g.add(10);
    g.add(0);
    g.add(1);
    g.add(7);
    g.add(3);
    g.add(6);
    g.add(4);
    g.add(10);
    g.add(2);
    g.add(8);
    g.add(6);
    ASSERT_EQ(133, g.score());
}

TEST(GameTest, HeartBreak) {
	Game g;
	for (int i = 0; i < 11; i++) {
		g.add(10);
	}
	g.add(9);
	ASSERT_EQ(299, g.score());
}

TEST(GameTest, TenthFrameSpare) {
	Game g;
	for(int i = 0; i < 9; i++) {
		g.add(10);
	}
	g.add(9);
	g.add(1);
	g.add(1);
	ASSERT_EQ(270, g.score());
}

TEST(FrameTest, ScoreNoThrows) {
	Frame f;
	f.add(5);
	ASSERT_EQ(5, f.getScore());
}
