#include <vector>

using namespace std;

class Solution {
public:
    // TODO
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int max = 0;
        int n = arr.size();
        int concate_length = n * k;
        int sum = 0;
        for (int i = 0; i < concate_length; ++i) {
            int temp_index = i - (i / n)* n;
            if (arr[temp_index] >= 0) {
                sum += arr[temp_index];
            }
            else {
                if (sum > max) max = sum;
                sum = 0;
            }
        }
        if (sum > max) max = sum;
        return max;
    }
};