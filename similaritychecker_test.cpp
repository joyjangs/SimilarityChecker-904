#include "gmock/gmock.h"
#include "similaritychecker.cpp"

using namespace testing;

class SimilarityFixture : public Test {
public:
	SimilarityChecker similarityChecker;
	void checkLengthScore(int expect, string str1, string str2) {
		EXPECT_EQ(expect, similarityChecker.getLengthScore(str1, str2));
	}
};

TEST_F(SimilarityFixture, SameLength)
{
	checkLengthScore(60, "ASD", "DSA");
}

TEST_F(SimilarityFixture, LongerThanTwice)
{
	checkLengthScore(0, "A", "BB");
}

TEST_F(SimilarityFixture, SubScore)
{
	checkLengthScore(20, "AAABB", "BAA");
	checkLengthScore(30, "AA", "AAE");
}

int main()
{
	InitGoogleMock();
	RUN_ALL_TESTS();
}