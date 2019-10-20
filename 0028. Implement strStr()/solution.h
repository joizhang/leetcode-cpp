#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int h_len = haystack.size();
        int n_len = needle.size();
        for (int i = 0; i <= h_len - n_len; i++) {
            if (needle[0] == haystack[i] && haystack.substr(i, n_len) == needle) {
                return i;
            }
        }
        return -1;
    }
};