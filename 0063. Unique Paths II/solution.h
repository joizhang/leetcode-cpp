#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<unsigned>> dp(m + 1, vector<unsigned>(n + 1, 0));
        dp[0][1] = 1;
        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                if (!obstacleGrid[i - 1][j - 1])
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        return dp[m][n];
    }
};