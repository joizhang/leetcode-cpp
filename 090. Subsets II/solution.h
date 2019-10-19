#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp_list;
        sort(nums.begin(), nums.end());
        backtrack(res, nums, 0, temp_list);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& nums, size_t index, vector<int>& temp_list) {
        if (index > nums.size()) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        res.push_back(vector<int>(temp_list));
        for (size_t i = index; i < nums.size(); ++i) {
            if (i > index && nums[i] == nums[i - 1]) continue;
            temp_list.push_back(nums[i]);
            backtrack(res, nums, i + 1, temp_list);
            temp_list.pop_back();
        }
    }
};