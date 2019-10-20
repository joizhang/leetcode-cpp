#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0, minLen = INT_MAX;
        size_t left = 0, right = 0;
        // 记录字符串 t 中包含的字符及出现次数
        unordered_map<char, int> needs;
        // 记录当前「窗口」中包含的字符及出现的次数
        unordered_map<char, int> windows;
        for (auto c : t) 
            needs[c]++;
        // 记录 window 中已经有多少字符符合要求了
        int match = 0;
        while (right < s.size()) {
            char c1 = s[right];
            if (needs.count(c1)) {
                windows[c1]++;
                if (windows[c1] == needs[c1])
                    match++;
            }
            right++;

            while (match == needs.size()) {
                if (right - left < minLen) {
                    start = left;
                    minLen = right - left;
                }
                char c2 = s[left];
                if (needs.count(c2)) {
                    windows[c2]--;
                    if (windows[c2] < needs[c2]) {// 字符 c2 出现次数不再符合要求
                        match--;
                    }
                }
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};