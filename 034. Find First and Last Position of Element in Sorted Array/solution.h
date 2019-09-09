#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2);
        res[0] = left_bound(nums, target);
        res[1] = right_bound(nums, target);
        return res;
    }
private:
    int left_bound(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        int lo = 0, hi = n;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (target == nums[mid])
                hi = mid;
            else if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == n) return -1;
        return nums[lo] == target ? lo : -1;
    }

    int right_bound(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        int lo = 0, hi = n;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (target == nums[mid])
                lo = mid + 1;
            else if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == 0) return -1;
        return nums[lo - 1] == target ? lo - 1 : -1;
    }
};