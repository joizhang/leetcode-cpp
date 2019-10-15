#include "solution.h"

int main() {
    Solution s;
    vector<vector<int>> matrix{
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    s.setZeroes(matrix);
}