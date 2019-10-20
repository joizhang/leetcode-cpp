#include <vector>
#include <string>

using namespace std;


bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid))
                if (mid == 1 || !isBadVersion(mid - 1)) 
                    return mid;
                else 
                    hi = mid - 1;
            else
                lo = mid + 1;
        }
        return -1;
    }
};

