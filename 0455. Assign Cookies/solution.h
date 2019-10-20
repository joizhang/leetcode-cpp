#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        // ��������θ��С��С���ѵ�����
        int g_len = g.size(), s_len = s.size(), i = 0, j = 0;
        while (i < g_len && j < s_len) {
            if (g[i] <= s[j]) {
                res++;
                i++;
                j++;
            }
            else j++;
        }
        return res;
    }
};