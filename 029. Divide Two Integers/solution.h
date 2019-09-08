#include <algorithm>

class Solution {
public:
    // ֪������ת�Ƶ�������
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
        long a = labs(dividend); // long ������ռ 8 ���ֽڣ�labs() ������ long �����ֵ
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
                cnt = cnt << 1; // ��������ǰ��ĸ���ϵ��
            }

            a -= temp;
            result += cnt;
        }

        if ((dividend < 0) ^ (divisor < 0)) result = -result;
        if (result > INT_MAX) result = INT_MAX; // INT_MAX = 2^32 - 1
        return result;
    }
};