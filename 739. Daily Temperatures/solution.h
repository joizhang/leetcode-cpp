#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> res(n, 0);
        for (int i = n - 2; i >= 0; --i) {
            for (int j = i + 1; j < n; j += res[j]) {
                if (T[j] > T[i]) {
                    res[i] = j - i;
                    break;
                }
                else if (res[j] == 0) {
                    res[i] = 0;
                    break;
                }
            }
        }
        return res;
    }
};