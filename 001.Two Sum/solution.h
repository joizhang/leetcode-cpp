#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;
        for (decltype(nums.size()) i = 0; i < nums.size(); ++i) {
            int numToFind = target - nums[i];
            if (map.find(numToFind) != map.end()) {
                result.push_back(map[numToFind]);
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;
        }
        return result;
    }
};