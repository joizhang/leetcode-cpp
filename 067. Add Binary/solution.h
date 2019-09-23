#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.size() - 1, j = b.size() - 1, carry = 0, aBound = 0, bBound = 0;
        for (; aBound < i; ++aBound)
            if (a[aBound] != '0') break;
        for (; bBound < j; ++bBound)
            if (b[bBound] != '0') break;
        while (i >= aBound || j >= bBound) {
            int temp = 0;
            if (i >= 0 && j >= 0) {
                temp = (a[i] - '0') + (b[j] - '0') + carry;
                --i;
                --j;
            }
            else if (i >= 0 && j < 0) {
                temp = (a[i] - '0') + carry;
                --i;
            }
            else if (i < 0 && j >= 0) {
                temp = (b[j] - '0') + carry;
                --j;
            }
            res = to_string(temp % 2) + res;
            carry = temp / 2;
        }
        if (carry != 0) {
            res = to_string(carry) + res;
        }
        return res;
    }
};