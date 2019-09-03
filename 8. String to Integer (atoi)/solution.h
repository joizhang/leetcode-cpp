#include <string>
using namespace std;

class Solution {
public:
    const int INT_MAX_DIV_TEN = INT_MAX / 10;
    const int INT_MIN_DIV_TEN = INT_MIN / 10;
    int myAtoi(string str) {
        if (str.empty()) return 0;
        int n = str.size(), ans = 0, symbol = 1, i = 0;
        while (str[i] == ' ') i++;
        if (str[i] == '-') {
            symbol = -1;
            i++;
        }
        else if (str[i] == '+') {
            i++;
        }
        for (; i < n; i++) {
            if (!isdigit(str[i])) break;
            if (str[i] == ' ') continue;
            int num = symbol * (str[i] - '0');
            if (ans > INT_MAX_DIV_TEN || (ans == INT_MAX_DIV_TEN && num > 7)) return INT_MAX;
            if (ans < INT_MIN_DIV_TEN || (ans == INT_MIN_DIV_TEN && num < -8)) return INT_MIN;
            ans = ans * 10 + num;
        }
        return ans;
    }
};