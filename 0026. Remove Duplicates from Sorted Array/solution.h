#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int j = 1;
        for (decltype(nums.size()) i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};