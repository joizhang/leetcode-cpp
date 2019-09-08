#include <vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 从右往左找到nums[i-1] < nums[i]
        int n = nums.size(), i = n - 2;
        while (i >= 0 && nums[i + 1] <= nums[i])
            i--;
        // 找到一个最接近nums[i - 1]并大于nums[i - 1]的数，然后交换值
        if (i >= 0) {
            int j = n - 1;
            while (j >= 0 && nums[j] <= nums[i])
                j--;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        // 将i到n-1升序排序，只需首尾交换
        int j = i + 1, k = n - 1;
        while (j < k) {
            int temp = nums[j];
            nums[j++] = nums[k];
            nums[k--] = temp;
        }
    }
};