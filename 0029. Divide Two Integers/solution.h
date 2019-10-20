#include <algorithm>

class Solution {
public:
    // 知乎除法转移到对数域
    int divide(int dividend, int divisor) {
        if (dividend == 0)  return 0;
        double a = fabs(dividend);
        double b = fabs(divisor);
        long result = exp(log(a) - log(b));
        if ((dividend < 0) ^ (divisor < 0)) result = -result;
        if (result > INT_MAX) result = INT_MAX;
        return result;
    }

    int divide2(int dividend, int divisor) {
        long a = labs(dividend); // long 型数据占 8 个字节，labs() 函数对 long 求绝对值
        long b = labs(divisor);
        long temp = b;

        long result = 0;
        long cnt = 1;

        while (a >= b)
        {
            cnt = 1;
            temp = b;
            while (a >= (temp << 1))
            {
                temp = temp << 1;
                cnt = cnt << 1; // 表征除数前面的各次系数
            }

            a -= temp;
            result += cnt;
        }

        if ((dividend < 0) ^ (divisor < 0)) result = -result;
        if (result > INT_MAX) result = INT_MAX; // INT_MAX = 2^32 - 1
        return result;
    }
};