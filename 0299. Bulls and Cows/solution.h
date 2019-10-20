#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> hash_table(10, 0);
        for (size_t i = 0; i < secret.size(); ++i)
            if (guess[i] == secret[i])
                ++bulls;
            else
                ++hash_table[secret[i] - '0'];
        for (size_t i = 0; i < guess.size(); ++i)
            if (guess[i] != secret[i] && hash_table[guess[i] - '0'] != 0) {
                ++cows;
                --hash_table[guess[i] - '0'];
            }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};