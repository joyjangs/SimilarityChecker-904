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
		
		return calculateSubscore(str1_length, str2_length);

	}
	int calculateSubscore(const int& str1_length, const int& str2_length)
	{
		int shorter_length = (str1_length > str2_length) ? str2_length : str1_length;
		int longer_length = (str1_length > str2_length) ? str1_length : str2_length;

		double gap = (double)longer_length - (double)shorter_length;
		return (int)((1.0 - (gap / (double)shorter_length)) * MAX_LENGTH_SCORE);
	}
};