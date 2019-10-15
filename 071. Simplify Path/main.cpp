#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    Solution s;
    cout << s.simplifyPath("/a/./b/../../c/") << endl;
    return 0;
}