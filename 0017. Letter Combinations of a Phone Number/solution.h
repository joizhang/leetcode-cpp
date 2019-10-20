#include <string>
#include <vector>

using namespace std;

const string letterMap[] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        findCombination(res, digits, 0, "");
        return res;
    }
private:
    void findCombination(vector<string>& v, string digits, int index, string s) {
        if (digits.empty()) return;
        if (index == digits.size()) {
            v.push_back(s);
            return;
        }
        string letter = letterMap[digits[index] - '0'];
        for (decltype(letter.size()) i = 0; i < letter.size(); i++) {
            findCombination(v, digits, index + 1, s + letter[i]);
        }
    }
};