#include <string>

using std::string;

class SimilarityChecker {
	const int MAX_LENGTH_SCORE = 60;
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (str1.length() == str2.length()) return MAX_LENGTH_SCORE;
		if (str1.length() >= str2.length() * 2 || str2.length() >= str1.length()*2) return 0;
		
		int result = 0;
		if (str1.length() > str2.length()) {
			result = (int) ((1.0 - (double)(str1.length() - str2.length()) / (double)str2.length()) * 60.0);
		}
		else {
			result = (int)((1.0 - (double)(str2.length() - str1.length()) / (double)str1.length()) * 60.0);
		}
		
		return result;
	}
};