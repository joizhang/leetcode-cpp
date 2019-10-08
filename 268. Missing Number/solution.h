#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0 ^ nums[0];
        for (size_t i = 1; i < nums.size(); ++i)
            res = res ^ (i ^ nums[i]);
        return res ^ nums.size();
    }
};