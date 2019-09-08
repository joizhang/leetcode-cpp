#include <vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // ���������ҵ�nums[i-1] < nums[i]
        int n = nums.size(), i = n - 2;
        while (i >= 0 && nums[i + 1] <= nums[i])
            i--;
        // �ҵ�һ����ӽ�nums[i - 1]������nums[i - 1]������Ȼ�󽻻�ֵ
        if (i >= 0) {
            int j = n - 1;
            while (j >= 0 && nums[j] <= nums[i])
                j--;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        // ��i��n-1��������ֻ����β����
        int j = i + 1, k = n - 1;
        while (j < k) {
            int temp = nums[j];
            nums[j++] = nums[k];
            nums[k--] = temp;
        }
    }
};