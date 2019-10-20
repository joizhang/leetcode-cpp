#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                char_stack.push(s[i]);
            else {
                if (char_stack.empty()) return false;
                char top_char = char_stack.top();
                if (s[i] - top_char == 1 || s[i] - top_char == 2)
                    char_stack.pop();
                else {
                    return false;
                }
            }
        }
        return char_stack.empty();
    }
};