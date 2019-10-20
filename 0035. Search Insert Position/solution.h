#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return 0;
        int left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (target == nums[mid])
                right = mid;
            else if (target > nums[mid])
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};