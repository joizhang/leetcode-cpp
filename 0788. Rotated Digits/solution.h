#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int rotatedDigits(int N) {
        unordered_map<char, char> rotate_map{ {'0', '0'}, {'1', '1'}, {'2', '5'}, {'5', '2'}, {'6', '9'}, {'8', '8'}, {'9', '6'} };
        int count = 0;
        for (int i = 1; i <= N; ++i) {
            string s = to_string(i);
            string s_rotated("");
            for (size_t j = 0; j < s.size(); ++j) {
                if (rotate_map.find(s[j]) == rotate_map.end()) break;
                s_rotated += rotate_map[s[j]];
            }
            if (s != s_rotated && s.size() == s_rotated.size())
                count++;
        }
        return count;
    }
};