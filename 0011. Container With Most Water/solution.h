#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, i = 0, j = height.size() - 1;
        while (i < j) {
            int area = min(height[i], height[j]) * (j - i);
            if (area > ans) ans = area;
            if (height[i] < height[j]) i++;
            else j--;
        }
        return ans;
    }
};