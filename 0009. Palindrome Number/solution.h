#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        int n = s.size();
        if (n == 1) return true;
        int mid = n / 2, left, right;
        if (n % 2 == 0) {
            left = mid - 1;
            right = mid;
        }
        else {
            left = mid - 1;
            right = mid + 1;
        }
        while (left >= 0 && right < n)
            if (s[left--] != s[right++]) return false;
        return true;
    }
};