#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string res(n1 + n2, '0');
        for (int j = n2 - 1; j >= 0; --j) {
            for (int i = n1 - 1; i >= 0; --i) {
                int temp = (res[i + j + 1] - '0') + (num2[j] - '0') * (num1[i] - '0');
                res[i + j + 1] = temp % 10 + '0';
                res[i + j] += temp / 10;
            }
        }
        for (int i = 0; i < n1 + n2; ++i) {
            if (res[i] != '0')
                return res.substr(i);
        }
        return "0";
    }
};