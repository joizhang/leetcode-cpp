#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return findNSum(nums, target, 4, 0);
    }

private:
    vector<vector<int>> findNSum(vector<int>& nums, int target, int n, int index) {
        vector<vector<int>> res;
        int length = nums.size();
        if (index >= length) return res;
        if (n == 2) {
            int i = index;
            int j = length - 1;
            while (i < j) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(vector<int>{nums[i], nums[j]});
                    while (i < j && nums[i] == nums[++i]);
                    while (i < j && nums[j] == nums[--j]);
                }
                else if (nums[i] + nums[j] < target) i++;
                else j--;
            }
        }
        else {
            for (int i = index; i < length - n + 1; i++) {
                vector<vector<int>> vectors = findNSum(nums, target - nums[i], n - 1, i + 1);
                if (!vectors.empty()) {
                    for (auto v : vectors) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.insert(temp.end(), v.begin(), v.end());
                        res.push_back(temp);
                    }
                }
                while (i < length - 1 && nums[i] == nums[i + 1]) i++;
            }
        }
        return res;
    }
};

