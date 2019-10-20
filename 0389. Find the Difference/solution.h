#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.empty()) return t[0];
        char res = s[0] ^ t[0];
        for (size_t i = 1; i < s.size(); ++i)
            res = res ^ (s[i] ^ t[i]);
        return res ^ t[t.size() - 1];
    }
};