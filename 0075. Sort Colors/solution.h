#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return;
        int p0 = -1, p2 = n;
        int i = 0;
        while (i < p2) {
            if (nums[i] == 1) {
                ++i;
            }
            else if (nums[i] == 2) {
                swap(nums[i], nums[--p2]);
            }
            else {
                swap(nums[i], nums[++p0]);
                ++i;
            }
        }
    }
};