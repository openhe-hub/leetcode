#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1); //max=amount+1
        dp[0]=0;
        for (int i = 0; i < coins.size(); ++i) {
            for(int j=coins[i];j<=amount;j++){
                dp[j]= min(dp[j],dp[j-coins[i]]+1);
            }
        }
        return dp[amount]>=amount+1?-1:dp[amount];
    }
};

int main(){
    vector<int> coins={2};
    Solution solution;
    cout<<solution.coinChange(coins,3)<<endl;
    return 0;
}