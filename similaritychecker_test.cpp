#include "gmock/gmock.h"
#include "similaritychecker.cpp"

using namespace testing;

TEST(SimilarityCheck, SameLength)
{
	SimilarityChecker similarityChecker;
	
	int actual = similarityChecker.getLengthScore("ASD", "DSA");
	int expect = 60;
	EXPECT_EQ(expect, actual);
}

int main()
{
	InitGoogleMock();
	RUN_ALL_TESTS();
}