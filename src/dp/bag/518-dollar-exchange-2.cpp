#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int change(int amount, vector<int> &coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); ++i) {
            for (int j = coins[i]; j <= amount; j++) {
                dp[j] = dp[j] + dp[j - coins[i]];
            }
        }
        return dp[amount];
    }
};

int main() {
    vector<int> coins = {10};
    Solution solution;
    cout << solution.change(10, coins) << endl;
    return 0;
}
