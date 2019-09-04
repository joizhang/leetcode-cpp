#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 0;
        int closest = INT_MAX;
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = sum - target;
                if (diff == 0) {
                    return sum;
                }
                if (abs(diff) < closest) {
                    closest = abs(diff);
                    res = sum;
                }
                if (sum < target) j++;
                else k--;
            }
        }
        return res;
    }
};