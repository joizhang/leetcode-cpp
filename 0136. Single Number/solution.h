#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            res = res ^ nums[i];
        }
        return res;
    }
};