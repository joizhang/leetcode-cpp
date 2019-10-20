#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums(n);
        vector<bool> used(n, false);
        for (int i = 0; i < n; ++i)
            nums[i] = i + 1;
        vector<int> factorial{ 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
        vector<string> pre;
        return dfs(nums, used, n, k, 0, pre, factorial);
    }
private:
    string dfs(vector<int>& nums, vector<bool>& used, int n, int k, int depth,
        vector<string>& pre, vector<int>& factorial) {
        if (depth == n) {
            string str;
            for (string s : pre)
                str += s;
            return str;
        }
        int ps = factorial[n - 1 - depth];
        for (int i = 0; i < n; ++i) {
            if (used[i])
                continue;
            if (ps < k) {
                k -= ps;
                continue;
            }
            pre.push_back(to_string(nums[i]));
            used[i] = true;
            return dfs(nums, used, n, k, depth + 1, pre, factorial);
        }
        return "";
    }
};