#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int n = s.size(), start = 0;
        for (; start < n; ++start) {
            if (s[start] != ' ') break;
        }
        int end = n - 1;
        for (; end >= 0; --end) {
            if (s[end] != ' ') break;
        }

        bool pointSeen = false;
        bool eSeen = false;
        bool numberSeen = false;
        bool numberAfterE = true;
        for (int i = start; i <= end; ++i) {
            if ('0' <= s[i] && s[i] <= '9') {
                numberSeen = true;
                numberAfterE = true;
            }
            else if (s[i] == '.') {
                if (eSeen || pointSeen)
                    return false;
                pointSeen = true;
            }
            else if (s[i] == 'e') {
                if (eSeen || !numberSeen)
                    return false;
                numberAfterE = false;
                eSeen = true;
            }
            else if (s[i] == '-' || s[i] == '+') {
                if (i- start != 0 && s[i - 1] != 'e')
                    return false;
            }
            else
                return false;
        }
        return numberSeen && numberAfterE;
    }
};