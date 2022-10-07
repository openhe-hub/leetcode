#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int n = nums.size(), sum = 0;
        for (auto num: nums) {
            sum += num;
        }
        if (sum % 2) return false;
        int target = sum / 2;
        vector<bool> dp(target + 1);
        dp[0]= true;
        for (int i = 0; i < n; ++i) {
            for (int j = target; j >= 0; j--) {
                if (j >= nums[i]) {
                    dp[j] = dp[j] || dp[j - nums[i]];
                }
            }
        }
        return dp[target];
    }
};

int main() {
    vector<int> nums={2,4};
    Solution solution;
    cout<<solution.canPartition(nums)<<endl;
    return 0;
}