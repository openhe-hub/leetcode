#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int dis=0x7fffffff,res=0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < len; i++) {
            int tar = target - nums[i];
            int p1 = i + 1, p2 = len - 1;
            while (p1 < p2) {
                int sum=nums[p1]+nums[p2];
                if(dis>abs(tar-sum)){
                    dis=abs(tar-sum);
                    res=sum+nums[i];
                }
                if(sum==tar) return target;
                (sum>tar)?p2--:p1++;
            }
        }
        return res;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}