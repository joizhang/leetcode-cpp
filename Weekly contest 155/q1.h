#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int min = abs(arr[1] - arr[0]);
        for (int i = 1; i < n; ++i)
            if (abs(arr[i] - arr[i - 1]) < min) 
                min = abs(arr[i] - arr[i - 1]);
        for (int i = 1; i < n; ++i)
            if (abs(arr[i] - arr[i - 1]) == min)
                res.push_back({ arr[i - 1] , arr[i] });
        return res;
    }
};