#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> dirs{ {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
        vector<vector<int>> res(n, vector<int>(n, 0));

        vector<int> nSteps{ n, n - 1 };

        int iDir = 0, ir = 0, ic = -1, elem = 1;
        while (nSteps[iDir % 2]) {
            for (int i = 0; i < nSteps[iDir % 2]; ++i) {
                ir += dirs[iDir][0];
                ic += dirs[iDir][1];
                res[ir][ic] = elem++;
            }
            nSteps[iDir % 2]--;
            iDir = (iDir + 1) % 4;
        }
        return res;
    }
};