#include <vector>

using namespace std;

class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        vector<bool> cols(n, false);    // columns   |
        vector<bool> d1(2 * n, false);  // diagonals 135
        vector<bool> d2(2 * n, false);  // diagonals 45
        backtrack(0, cols, d1, d2, n, count);
        return count;
    }
private:
    void backtrack(int row, vector<bool>& cols, vector<bool>& d1, 
        vector<bool>& d2, int n, int& count) {
        if (row == n) count++;
        for (int col = 0; col < n; ++col) {
            int id1 = col - row + n;
            int id2 = col + row;
            if (cols[col] || d1[id1] || d2[id2]) continue;
            cols[col] = true;
            d1[id1] = true;
            d2[id2] = true;
            backtrack(row + 1, cols, d1, d2, n, count);
            cols[col] = false;
            d1[id1] = false;
            d2[id2] = false;
        }
    }
};