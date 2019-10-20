#include <algorithm>

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        else if (n > 0) return qpow(x, n);
        else return 1 / qpow(x, n);
    }
private:
    double qpow(double x, long long n) {
        double res = 1.0;
        if (x == 1.0) return res;
        n = abs(n);
        while (n) {
            if (n & 1) res = res * x;
            x *= x;
            n = n >> 1;
        }
        return res;
    }
};