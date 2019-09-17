#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // greedy
    int jump(vector<int>& nums) {
        int step = 0;
        int end = 0;
        int max_position = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            max_position = max(max_position, nums[i] + i);
            if (i == end) {
                end = max_position;
                step++;
            }
        }
        return step;
    }

    int jump2(vector<int>& nums) {
        int step = 0;
        int end = 0;
        int max_position = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            max_position = max(max_position, nums[i] + i);
            if (i == end) {
                end = max_position;
                step++;
            }
        }
        return step;
    }
};