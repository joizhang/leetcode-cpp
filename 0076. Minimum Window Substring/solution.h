#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0, minLen = INT_MAX;
        size_t left = 0, right = 0;
        // ��¼�ַ��� t �а������ַ������ִ���
        unordered_map<char, int> needs;
        // ��¼��ǰ�����ڡ��а������ַ������ֵĴ���
        unordered_map<char, int> windows;
        for (auto c : t) 
            needs[c]++;
        // ��¼ window ���Ѿ��ж����ַ�����Ҫ����
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
                    if (windows[c2] < needs[c2]) {// �ַ� c2 ���ִ������ٷ���Ҫ��
                        match--;
                    }
                }
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};