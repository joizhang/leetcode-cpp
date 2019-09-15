#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        vector<int> temp_list;
        backtrack(res, candidates, target, 0, temp_list);
        return res;
    }

    // DP solution
    vector<vector<int>> combinationSumDp(vector<int>& candidates, int target) {
        unordered_map<int, set<vector<int>>> dict;
        for (int i = 1; i <= target; i++)
            for (int it : candidates)
                if (i == it) dict[i].insert(vector<int>{it});
                else if (i > it)
                    for (auto ivec : dict[i - it]) {
                        ivec.push_back(it);
                        sort(ivec.begin(), ivec.end());
                        if (dict[i].count(ivec) == 0)
                            dict[i].insert(ivec);
                    }
        vector<vector<int>> res;
        for (auto it : dict[target]) res.push_back(it);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& candidates, int target, int i, vector<int>& temp_list) {
        if (target < 0) return;
        if (target == 0) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        for (decltype(candidates.size()) start = i; start < candidates.size(); ++start) {
            if (target < candidates[start]) break;
            temp_list.push_back(candidates[start]);
            backtrack(res, candidates, target - candidates[start], start, temp_list);
            temp_list.pop_back();
        }
    }
};