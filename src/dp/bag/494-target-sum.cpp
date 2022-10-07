#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int> &nums, int target) {
        int sum = 0, n = nums.size();
        for (const auto &item: nums) {
            sum += item;
        }
        int diff = sum - target;
        if (diff < 0 || diff % 2 != 0) return 0;
        int neg = diff / 2;
        vector<int> dp(neg + 1);
        
        //init
        dp[0]=1;
        //dp
        for (int i = 1; i <= n; ++i) {
            for (int j = neg; j >= 0; j--) {
                if (j>=nums[i-1]){
                    dp[j]=dp[j]+dp[j-nums[i-1]];
                }
            }
        }
        return dp[neg];
    }
};

int main() {
    vector<int> nums={1,1,1,1,1};
    int target=3;
    Solution solution;
    cout<<solution.findTargetSumWays(nums,target)<<endl;
    return 0;
}
