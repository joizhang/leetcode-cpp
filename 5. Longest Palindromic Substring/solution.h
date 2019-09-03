#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len < 2) {
            return s;
        }
        int start = 0, end = 0;
        for (int i = 0; i < len - 1; i++) {
            int len1 = extendPalindrome(s, i, i); // 奇数长度
            int len2 = extendPalindrome(s, i, i + 1); // 偶数长度
            int len3 = max(len1, len2);
            if (len3 > end - start + 1) {
                start = i - (len3 - 1) / 2;
                end = i + len3 / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

    // leetcode 0ms solution
    string longestPalindrome2(string s) {
        if (s.size() < 0)
            return "";
        int length = s.length();
        int maxs = 0;
        int l = 0, r = 0;
        int l_re = 0;
        for (int i = 0; i < length; i++) {
            l = i;
            while (i + 1 < length && s[i] == s[i + 1])
                i++;
            r = i;
            while (l - 1 >= 0 && r + 1 < length && s[l - 1] == s[r + 1]) {
                l--;
                r++;
            }
            if (r - l + 1 > maxs) {
                maxs = r - l + 1;
                l_re = l;
            }

        }
        return s.substr(l_re, maxs);
    }
private:
    int extendPalindrome(string s, int left, int right) {
        int len = s.size();
        while (left >= 0 && right < len && s[left] == s[right]) { left--; right++; }
        return right - left - 1;
    }
};