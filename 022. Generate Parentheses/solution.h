#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrace(ans,  n, n, "");
        return ans;
    }
private:
    void backtrace(vector<string>& v, int open, int close, string s) {
        if (open == 0 && close == 0) {
            v.push_back(s);
            return;
        }
        if (open > 0)
            backtrace(v, open - 1, close, s + "(");
        if (close > 0 && close > open)
            backtrace(v, open, close - 1, s + ")");
    }
};