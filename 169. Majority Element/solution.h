#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0], count = 1;
        for (size_t i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                ++count;
                major = nums[i];
            }
            else if (nums[i] == major) ++count;
            else --count;
        }
        return major;
    }

    // Hash table
    int majorityElement2(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int num : nums)
            if (++map[num] > nums.size() / 2)
                return num;
        return 0;
    }

    // Sorting
    int majorityElement3(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }

    // Divide and conquer
    int majorityElement4(vector<int>& nums) {
        return majority(nums, 0, nums.size() - 1);
    }
private:
    int majority(vector<int>& nums, int l, int r) {
        if (l == r)
            return nums[l];
        int m = l + (r - l) / 2, lm = majority(nums, l, m), rm = majority(nums, m + 1, r);
        if (lm == rm)
            return lm;
        return count(nums.begin() + 1, nums.begin() + r + 1, lm) > count(nums.begin() + 1, nums.begin() + r + 1, rm) ? lm : rm;
    }
};