#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // flag represents all numbers are nine
        bool flag = true;
        for (int i = 0; i < n; ++i)
            if (digits[i] != 9) {
                flag = false;
                break;
            }
        if (flag) {
            digits[0] = 1;
            for (int i = 1; i < n; ++i) digits[i] = 0;
            digits.push_back(0);
        }
        else {
            int m = 1;
            for (int i = n - 1; i >= 0; --i) {
                if (m == 0) break;
                digits[i] = digits[i] + m;
                m = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
        }
        return digits;
    }
};