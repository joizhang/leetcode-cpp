#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 3) return res;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            int a = nums[i];
            if (a > 0) break;
            if (i > 0 && a == nums[i - 1]) continue;
            for (int j = i + 1, k = n - 1; j < k;) {
                int b = nums[j];
                int c = nums[k];
                int sum = a + b + c;
                if (sum == 0) {
                    res.push_back(vector<int>{a, b, c});
                    while (j < k && nums[++j] == b);
                    while (j < k && nums[--k] == c);
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return res;
    }
}; 