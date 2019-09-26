#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int N) {
        vector<int> memo(N + 1);
        if (N == 0) return 0;
        memo[0] = 0;
        if (N == 1) return 1;
        memo[1] = 1;
        for (int i = 2; i <= N; ++i)
            memo[i] = memo[i - 1] + memo[i - 2];
        return memo[N];
    }
};