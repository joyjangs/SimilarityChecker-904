#include <string>

using std::string;

class SimilarityChecker {
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (str1.length() == str2.length()) return 60;
		return 0;
	}
};