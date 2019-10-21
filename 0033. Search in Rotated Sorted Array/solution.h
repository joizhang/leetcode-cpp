#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (target == nums[mid]) return mid;
            else if (nums[lo] < nums[mid]) { // 左边不包含旋转
                if (target < nums[mid] && target >= nums[lo]) 
                    hi = mid - 1;
                else 
                    lo = mid + 1;
            }
            else if (nums[mid] < nums[hi]) { // 右边不包含旋转
                if (target > nums[mid] && target <= nums[hi]) 
                    lo = mid + 1;
                else 
                    hi = mid - 1;
            }
            else 
                lo++;
        }
        return -1;
    }
};