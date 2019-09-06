#include <vector>

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int turn = 0;
        while (candies != 0) {
            if (turn + 1 < candies){
                res[turn % num_people] += turn + 1;
                candies = candies - (turn + 1);
            }
            else {
                res[turn % num_people] += candies;
                candies -= candies;
            }
            turn++;
        }
        return res;
    }
};