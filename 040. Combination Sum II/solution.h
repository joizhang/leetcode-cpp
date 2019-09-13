#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        vector<int> temp_list;
        backtrack(res, candidates, target, 0, temp_list);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& candidates, int target, int i, vector<int>& temp_list) {
        if (target == 0) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        if (target < 0) return;
        for (size_t start = i; start < candidates.size(); start++) {
            if (target < candidates[start]) break;
            if (start > i && candidates[start] == candidates[start - 1]) continue;
            temp_list.push_back(candidates[start]);
            backtrack(res, candidates, target - candidates[start], start + 1, temp_list);
            temp_list.pop_back();
        }
    }
};