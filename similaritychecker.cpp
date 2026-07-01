#include <string>

using std::string;

class SimilarityChecker {
	const int MAX_LENGTH_SCORE = 60;
public:
	int getLengthScore(const string& str1, const string& str2) {
		int str1_length = str1.length();
		int str2_length = str2.length();

		if (str1_length == str2_length) return MAX_LENGTH_SCORE;
		if (str1_length >= str2_length * 2 || str2_length >= str1_length *2) return 0;
		
		int shorter_length = (str1_length > str2_length) ? str2_length : str1_length;
		int longer_length = (str1_length > str2_length) ? str1_length : str2_length;

		return calculateSubscore(longer_length, shorter_length);

	}
	int calculateSubscore(const int& longer_length, const int& shorter_length)
	{
		double gap = (double)longer_length - (double)shorter_length;
		return (int)((1.0 - (gap / (double)shorter_length)) * MAX_LENGTH_SCORE);
	}
};