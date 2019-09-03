class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int pop = x % 10;
            if (ans > INT_MAX / 10 || (INT_MAX / 10 == ans && pop > 7)) return 0;
            if (ans < INT_MIN / 10 || (INT_MIN / 10 == ans && pop < -8)) return 0;
            x /= 10;
            ans = ans * 10 + pop;
        }
        return ans;
    }
};