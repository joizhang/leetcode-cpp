#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int k = 0;
        for (size_t i = 0; i < arr2.size(); ++i)
            for (size_t j = k + 1; j < arr1.size(); ++j) {
                if (arr1[k] == arr2[i]) 
                    k++;
                else if (arr1[k] != arr2[i] && arr1[j] == arr2[i]) {
                    swap(arr1[k], arr1[j]);
                    k++;
                }
            }
        sort(arr1.begin() + k, arr1.end());
        return arr1;
    }
};