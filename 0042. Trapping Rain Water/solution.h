#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // 按列求
    int trap(vector<int>& height) {
        int sum = 0;
        int n = height.size();
        if (n <= 2) return sum;
        // 盛水的地方只在[1, n - 2]
        for (size_t i = 1; i < n - 1; ++i) {
            int max_left = 0;
            for (int j = i - 1; j >= 0; --j)
                if (height[j] > max_left)
                    max_left = height[j];

            int max_right = 0;
            for (int j = i + 1; j < n; ++j)
                if (height[j] > max_right)
                    max_right = height[j];

            int min_height = min(max_left, max_right);
            if (min_height > height[i])
                sum += (min_height - height[i]);
        }
        return sum;
    }

    // 动态规划
    int trap2(vector<int>& height) {
        int sum = 0;
        int n = height.size();
        if (n <= 2) return sum;

        vector<int> max_left(n, 0);
        vector<int> max_right(n, 0);

        for (int i = 1; i < n - 1; ++i)
            max_left[i] = max(max_left[i - 1], height[i - 1]);

        for (int i = n - 2; i > 0; --i)
            max_right[i] = max(max_right[i + 1], height[i + 1]);

        for (int i = 1; i < n - 1; ++i) {
            int min_height = min(max_left[i], max_right[i]);
            if (min_height > height[i])
                sum += (min_height - height[i]);
        }
        return sum;
    }
};