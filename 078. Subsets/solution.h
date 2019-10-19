#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp_list;
        backtrack(res, nums, 0, temp_list);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& nums, int index, vector<int>& temp_list) {
        if (temp_list.size() > nums.size()) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        res.push_back(vector<int>(temp_list));
        for (size_t i = index; i < nums.size(); ++i) {
            temp_list.push_back(nums[i]);
            backtrack(res, nums, i + 1, temp_list);
            temp_list.pop_back();
        }
    }
};