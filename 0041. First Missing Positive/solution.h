#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            while (nums[i] != i + 1) {
                if (nums[i] <= 0 || nums[i] >= n + 1 || nums[i] == nums[nums[i] - 1])
                    break;
                int idx = nums[i] - 1;
                nums[i] = nums[idx];
                nums[idx] = idx + 1;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (i + 1 != nums[i]) return i + 1;
        }
        return n + 1;
    }
private:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
};