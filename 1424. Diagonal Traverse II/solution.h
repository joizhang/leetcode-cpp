#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> m;
        for (size_t i = 0; i != nums.size(); ++i) {
            for (size_t j = 0; j != nums[i].size(); ++j) {
                if (i + j >= m.size()) {
                    m.push_back({nums[i][j]});
                }
                else {
                    m[i + j].push_back(nums[i][j]);
                }
            }
        }
        vector<int> res;
        for (int i = 0; i != m.size(); ++i) {
            for (int j = m[i].size() - 1; j >= 0; --j) {
                res.push_back(m[i][j]);
            }
        }
        return res;
    }
};