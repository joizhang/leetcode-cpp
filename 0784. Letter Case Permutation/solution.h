#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        backtrack(res, S, 0);
        return res;
    }
private:
    void backtrack(vector<string>& res, string& S, int index) {
        if (index > S.size()) {
            res.push_back(string(S));
            return;
        }
        res.push_back(string(S));
        for (size_t i = index; i < S.size(); ++i) {
            if (!isalpha(S[i])) continue;
            if (islower(S[i])) {
                S[i] = toupper(S[i]);
                backtrack(res, S, i + 1);
                S[i] = tolower(S[i]);
            }
            else {
                S[i] = tolower(S[i]);
                backtrack(res, S, i + 1);
                S[i] = toupper(S[i]);
            }
        }
    }
};