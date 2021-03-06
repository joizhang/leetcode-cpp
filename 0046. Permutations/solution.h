#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<bool> used(nums.size(), false);
        vector<int> temp_list;
        backtrack(nums, res, used, 0, temp_list);
        return res;
    }
private:
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<bool>& used,
        int index, vector<int>& temp_list) {
        if (index == nums.size()) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        for (size_t i = 0; i < nums.size(); ++i) {
            if (!used[i]) {
                temp_list.push_back(nums[i]);
                used[i] = true;
                backtrack(nums, res, used, index + 1, temp_list);
                used[i] = false;
                temp_list.pop_back();
            }
        }
    }
};