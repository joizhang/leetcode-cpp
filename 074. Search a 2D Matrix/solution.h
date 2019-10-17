#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        int lo = 0, hi = n * m - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int i = mid / m;
            int j = mid % m;
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return false;
    }
};