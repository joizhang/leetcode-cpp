#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map{ {'I', 1}, {'V', 5 }, {'X', 10 }, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        int result = 0;
        int n = s.size();
        int i = 0;
        while (i < n) {
            if (map[s[i]] < map[s[i + 1]]) {
                result += (map[s[i + 1]] - map[s[i]]);
                i += 2;
            }
            else {
                result += map[s[i]];
                i++;
            }
        }
        return result;
    }

    int romanToInt2(string s) {
        unordered_map<char, int> map{ {'I', 1}, {'V', 5 }, {'X', 10 }, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        int result = map[s.back()];
        int n = s.size();
        for (int i = n - 2; i >= 0; --i) {
            if (map[s[i]] < map[s[i + 1]]) {
                result -= map[s[i]];
            }
            else {
                result += map[s[i]];
            }
        }
        return result;
    }

    int romanToInt3(string s) {
        unordered_map<char, int> T = { { 'I' , 1 }, { 'V' , 5 }, { 'X' , 10 }, { 'L' , 50 }, { 'C' , 100 }, { 'D' , 500 }, { 'M' , 1000 } };
        int sum = T[s.back()];
        for (int i = s.length() - 2; i >= 0; --i)
        {
            if (T[s[i]] < T[s[i + 1]])
            {
                sum -= T[s[i]];
            }
            else
            {
                sum += T[s[i]];
            }
        }

        return sum;
    }
};