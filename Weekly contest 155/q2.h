#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        int res = 0;
        vector<int> v{ a, b, c };
        sort(v.begin(), v.end());
        int next = 0;
        int count = 0;
        for (int i = 1;; ++i) {

        }
        return res;
    }
};