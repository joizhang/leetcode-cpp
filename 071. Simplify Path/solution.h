#include <sstream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string res, tmp;
        vector<string> stack_s;
        stringstream ss(path);
        while (getline(ss, tmp, '/')) {
            if (tmp == "" || tmp == ".") 
                continue;
            else if (tmp == "..") {
                if (!stack_s.empty()) stack_s.pop_back();
            }
            else
                stack_s.push_back(tmp);
        }
        for (auto s : stack_s) res += ("/" + s);
        return stack_s.empty() ? "/" : res;
    }
};