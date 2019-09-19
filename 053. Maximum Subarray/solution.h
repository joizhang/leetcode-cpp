#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (sum > 0)
                sum += nums[i];
            else
                sum = nums[i];
            ans = max(ans, sum);
        }
        return ans;
    }

    // DP
    int maxSubArray2(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        dp[0] = nums[0];
        int res = dp[0];

        for (int i = 1; i < n; ++i) {
            dp[i] = nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
            res = max(res, dp[i]);
        }
        return res;
    }
};