#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for (size_t i = 0; i < strs.size(); ++i) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (map.find(temp) == map.end()) {
                vector<string> v{ strs[i] };
                map[temp] = v;
            }
            else map[temp].push_back(strs[i]);
        }
        for (auto v : map) res.push_back(v.second);
        return res;
    }
};