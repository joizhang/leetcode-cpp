#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int max_len = 0;
        int n = s.size();
        vector<int> dp(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == ')') {
                if (s[i - 1] == '(')
                    // 字符串形如"……()"
                    dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
                else if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(')
                    // 字符串形如".......))"
                    dp[i] = dp[i - 1] + ((i - dp[i - 1]) >= 2 ? dp[i - dp[i - 1] - 2] : 0) + 2;
            }
            max_len = max(max_len, dp[i]);
        }
        return max_len;
    }
};