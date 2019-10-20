#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row_map, col_map, cell_map;
        for (decltype(board.size()) i = 0; i < board.size(); ++i)
            for (decltype(board[0].size()) j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == '.') continue;
                if (!row_map[i].insert(board[i][j]).second) return false;
                if (!col_map[j].insert(board[i][j]).second) return false;
                if (!cell_map[i / 3 * 10 + j / 3].insert(board[i][j]).second) return false;
            }
        return true;
    }
};