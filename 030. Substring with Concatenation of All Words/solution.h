#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int words_len = words.size();
        if (words_len == 0) return res;
        
        // ��words�е�Ԫ�ش�map1
        unordered_map<string, int> map1;
        for (int i = 0; i < words_len; i++)
            if (map1.find(words[i]) == map1.end())
                map1[words[i]] = 1;
            else
                map1[words[i]] = map1[words[i]] + 1;

        int word_len = words[0].size();
        for (int i = 0; i < word_len; i++) {
            unordered_map<string, int> map2;
            int match_times = 0;
            for (decltype(s.size()) j = i; j < s.size(); j += word_len) {
                string s_sub = s.substr(j, word_len);
                // words������s_sub������ʣ�����
                if (map1.find(s_sub) == map1.end()) {
                    match_times = 0;
                    map2.clear();
                    continue;
                }
                // ����map2
                if (map2.find(s_sub) == map2.end())
                    map2[s_sub] = 1;
                else
                    map2[s_sub] = map2[s_sub] + 1;
                // ƥ��ɹ���+1
                match_times++;
                // ʧ����
                if (map2[s_sub] > map1[s_sub]) {
                    j = j - word_len * (match_times - 1);
                    match_times = 0;
                    map2.clear();
                    continue;
                }
                // �ɹ���
                if (match_times == words_len) {
                    res.push_back(j - word_len * (match_times - 1));
                    j = j - word_len * (match_times - 1);
                    match_times = 0;
                    map2.clear();
                }
            }
        }
        return res;
    }
};