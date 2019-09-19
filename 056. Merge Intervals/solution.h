#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n <= 1) return intervals;
        sort(intervals.begin(), intervals.end());
        int j = 0;
        for (int i = 1; i < n; ++i) {
            if (intervals[i][0] > intervals[j][1]) {
                j++;
                intervals[j][0] = intervals[i][0];
                intervals[j][1] = intervals[i][1];
            }
            else if (intervals[i][1] > intervals[j][1])
                intervals[j][1] = intervals[i][1];
        }
        intervals.resize(j + 1);
        return intervals;
    }
};