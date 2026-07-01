#include <string>

using std::string;

class SimilarityChecker {
	const int MAX_LENGTH_SCORE = 60;
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (str1.length() == str2.length()) return MAX_LENGTH_SCORE;
		return 0;
	}
};