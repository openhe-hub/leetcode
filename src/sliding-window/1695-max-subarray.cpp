#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int> &nums) {
        int l = 0, r = 0, n = nums.size(), ret = 0, sum = 0;
        map<int, int> freq;
        while (r <= n - 1) {
            if (freq[nums[r]]){
                while (freq[nums[r]]) {
                    freq[nums[l]]--;
                    sum -= nums[l];
                    l++;
                }
            }
            freq[nums[r]]++;
            sum += nums[r];
            ret= max(ret,sum);
            r++;
        }
        return ret;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {5,2,1,2,5,2,1,2,5};
    cout << solution.maximumUniqueSubarray(nums) << endl;
    return 0;
}
