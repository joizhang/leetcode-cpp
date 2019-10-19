#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp_list;
        backtrack(res, n, k, 1, temp_list);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, int n, int k, int index, vector<int>& temp_list) {
        if (temp_list.size() == k) {
            res.push_back(vector<int>(temp_list));
            return;
        }
        for (int i = index; i <= n - (k - temp_list.size()) + 1; ++i) {
            temp_list.push_back(i);
            backtrack(res, n, k, i + 1, temp_list);
            temp_list.pop_back();
        }
    }
};