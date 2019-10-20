#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int res = 0;
        int i = n - 1;
        for (; i >= 0; --i) {
            if (s[i] != ' ') break;
        }
        if (i < 0) return 0;
        for (; i >= 0; --i) {
            if (s[i] != ' ') res++;
            else break;
        }
        return res;
    }
};