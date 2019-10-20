#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (i > k) return false;
            k = max(k, i + nums[i]);
        }
        return true;
    }
};