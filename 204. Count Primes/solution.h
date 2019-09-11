#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) return 0;
        vector<bool> v(n, true);
        for (int i = 2; i * i < n; ++i) {
            if (!isPrime(i)) continue;
            v[i] = true;
            for (int j = i * i; j < n; j += i) {
                v[j] = false;
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
            if (v[i]) count++;
        return count;
    }
private:
    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; ++i)
            if (num % i == 0) return false;
        return true;
    }
};