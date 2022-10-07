#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lastStoneWeightII(vector<int> &stones) {
        int n = stones.size(), sum = 0;
        for (const auto &item: stones) {
            sum += item;
        }
        int target=sum/2;
        vector<bool> dp(target+1);
        dp[0]= true;
        for (int i = 0; i < n; ++i) {
            for (int j=target;j>=0;j--){
                if (j>=stones[i]){
                    dp[j]=dp[j]||dp[j-stones[i]];
                }
            }
        }
        for (int j = target; j >=0 ; j--) {
            if (dp[j]) return sum-2*j;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums={31,26,33,21,40};
    cout<<solution.lastStoneWeightII(nums)<<endl;
    return 0;
}
